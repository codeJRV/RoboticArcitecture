#!/usr/bin/env python




# def move_group_python_interface_tutorial():

#   print "============ Starting tutorial setup"
#   moveit_commander.roscpp_initialize(sys.argv)
#   rospy.init_node('trackgort_node',
#                   anonymous=True)


#   robot = moveit_commander.RobotCommander()
#   scene = moveit_commander.PlanningSceneInterface()
#   group = moveit_commander.MoveGroupCommander("manipulator")
  
  
#   wpose = group.get_current_pose().pose
#   print wpose

#   lines = [line.rstrip('\n') for line in open(FILE_PATH) if line.startswith(("MoveL")) ]
#   ip_waypoints = []

#   # for line in lines:
#   #   print lines

#   for line in lines:
#     line = line.split(']', 1)[0]
#     line = line[8:]
#     coordinates  = line.split(',')
#     ip_waypoints.append(coordinates)
  
#   waypoints=[]
#   path_plan = []

#   for coordinates in ip_waypoints:
#     wpose.position.x = float(coordinates[0])/1000
#     wpose.position.y = float(coordinates[1])/1000
#     waypoints.append(copy.deepcopy(wpose))

#   (plan3, fraction) = group.compute_cartesian_path(
#                                waypoints,   # waypoints to follow
#                                0.01,        # eef_step
#                                0.0)         # jump_threshold
  
#   print "============ Waiting while RVIZ displays plan3..."
#   rospy.sleep(5)

#   is_safe = raw_input("Plan ok to exexute? : y/n ")
#   slow_move = raw_input("Move slow to checkpoints? : y/n ")

#   if(slow_move == 'y'):
#     for coordinates1, coordinates2 in grouper(2, ip_waypoints):
#       waypoints=[]
#       wpose.position.x = float(coordinates1[0])/1000
#       wpose.position.y = float(coordinates1[1])/1000
#       waypoints.append(copy.deepcopy(wpose))
#       wpose.position.x = float(coordinates2[0])/1000
#       wpose.position.y = float(coordinates2[1])/1000
#       waypoints.append(copy.deepcopy(wpose))
#       (plan, fraction) = group.compute_cartesian_path(
#                                  waypoints,   # waypoints to follow
#                                  0.01,        # eef_step
#                                  0.0)         # jump_threshold
#       #path_plan.append(plan)
#       if(is_safe=='y'):
#         print("Executing trajectory")
#         group.execute(plan)
#   else:
#     if(is_safe=='y'):
#       print("Executing trajectory")
#       group.execute(plan3)


                               
#   print "============ Waiting while RVIZ displays plan3..."
#   rospy.sleep(5)





  

#   collision_object = moveit_msgs.msg.CollisionObject()
#   moveit_commander.roscpp_shutdown()

#   print "============ STOPPING"


# if __name__=='__main__':
#   try:
#     move_group_python_interface_tutorial()
#   except rospy.ROSInterruptException:
#     pass


#!/usr/bin/env python
import rospy
from std_msgs.msg import Float64
import sys
import copy
import rospy
import moveit_commander
import moveit_msgs.msg
import geometry_msgs.msg


from itertools import izip_longest

def grouper(n, iterable, fillvalue=None):
    "grouper(3, 'ABCDEFG', 'x') --> ABC DEF Gxx"
    args = [iter(iterable)] * n
    return izip_longest(fillvalue=fillvalue, *args)



moveit_commander.roscpp_initialize(sys.argv)
robot = moveit_commander.RobotCommander()
scene = moveit_commander.PlanningSceneInterface()
group = moveit_commander.MoveGroupCommander("manipulator")
ip_waypoints = []
op_waypoints = []
target_z = 0.300
first = 0
tolerance = 0.008

FILE_PATH = "/home/jrv/Research/RoboticArcitecture/abb_experimental_ws/Pattern/Output80.txt"

def callback(data):
    wpose = group.get_current_pose().pose
    global first
    #print ("x,y:" , wpose.position.x," ", wpose.position.y)
    if(first <len(ip_waypoints)):     
      coordinates = ip_waypoints[first]
      if  ( ( wpose.position.x <= (float(coordinates[0])/1000 + tolerance )) and (wpose.position.x >= (float(coordinates[0])/1000 - tolerance )) and
            ( wpose.position.y <= (float(coordinates[1])/1000 + tolerance )) and (wpose.position.y >= (float(coordinates[1])/1000 - tolerance )) ):
        print first,":x,y,z,data:" , wpose.position.x," ", wpose.position.y," ", wpose.position.z, " reading:", data.data,"correction :", target_z - data.data
        
        corrected_coordinate = []
        corrected_coordinate.append(coordinates[0])
        corrected_coordinate.append(coordinates[1])
        zdiff = target_z - data.data
        corrected_coordinate.append((wpose.position.z + zdiff)*1000)
        op_waypoints.append(corrected_coordinate)

        first +=1
    if(len(ip_waypoints)==len(op_waypoints)):
      for point in op_waypoints:
        print point
      mover()

    
def listener():

    # In ROS, nodes are uniquely named. If two nodes with the same
    # node are launched, the previous one is kicked off. The
    # anonymous=True flag means that rospy will choose a unique
    # name for our 'listener' node so that multiple listeners can
    # run simultaneously.

    rospy.init_node('trackgort_node', anonymous=True)

    rospy.Subscriber("sensor_readings", Float64, callback)

    # spin() simply keeps python from exiting until this node is stopped
    if(len(ip_waypoints)!=len(op_waypoints)):
      rospy.spin()

def mover():
   if(len(op_waypoints)==len(ip_waypoints)):
      display_trajectory_publisher = rospy.Publisher(
                                      '/move_group/display_planned_path',
                                      moveit_msgs.msg.DisplayTrajectory,
                                      queue_size=20)
      waypoints=[]
      path_plan = []
      
      next_pose = geometry_msgs.msg.Pose() 
      next_pose  = group.get_current_pose().pose;

      pose_target = geometry_msgs.msg.Pose()
      pose_target.orientation.w = 1.0000
      pose_target.orientation.x = 0.0000
      pose_target.orientation.y = 0.0000
      pose_target.orientation.z = 0.0000
      pose_target.position.x = op_waypoints[0][0]
      pose_target.position.y = op_waypoints[0][1]
      pose_target.position.z = op_waypoints[0][2]
      group.set_pose_target(pose_target)
      plan1 = group.plan()
      group.go()



      for coordinates in op_waypoints:
        next_pose.position.x = float(coordinates[0])/1000
        next_pose.position.y = float(coordinates[1])/1000
        next_pose.position.z = float(coordinates[2])/1000
        waypoints.append(copy.deepcopy(next_pose))

      (plan3, fraction) = group.compute_cartesian_path(
                                   waypoints,   # waypoints to follow
                                   0.01,        # eef_step
                                   0.0)         # jump_threshold

      print "============ Waiting while RVIZ displays plan3..."
      rospy.sleep(5)

      is_safe = raw_input("Plan ok to exexute? : y/n ")
      slow_move = raw_input("Move slow to checkpoints? : y/n ")

      if(is_safe=='y'):
        group.execute(plan3)



      # if(slow_move == 'y' and is_safe=='y'):

      #   waypoints=[]
      #   wpose = group.get_current_pose().pose
      #   waypoints.append(copy.deepcopy(wpose))
      #   wpose.position.x = float(op_waypoints[0][0])/1000
      #   wpose.position.y = float(op_waypoints[0][1])/1000
      #   wpose.position.z = float(op_waypoints[0][2])/1000
      #   waypoints.append(copy.deepcopy(wpose))
      #   (planStart, fraction) = group.compute_cartesian_path(
      #                              waypoints,   # waypoints to follow
      #                              0.01,        # eef_step
      #                              0.0)         # jump_threshold

      #   group.execute(planStart)

      #   for coordinates1, coordinates2 in grouper(2, op_waypoints):
      #     waypoints=[]
      #     wpose.position.x = float(coordinates1[0])/1000
      #     wpose.position.y = float(coordinates1[1])/1000
      #     wpose.position.y = float(coordinates1[2])/1000
      #     waypoints.append(copy.deepcopy(wpose))
      #     wpose.position.x = float(coordinates2[0])/1000
      #     wpose.position.y = float(coordinates2[1])/1000
      #     wpose.position.y = float(coordinates2[2])/1000
      #     waypoints.append(copy.deepcopy(wpose))
      #     (plan, fraction) = group.compute_cartesian_path(
      #                                waypoints,   # waypoints to follow
      #                                0.01,        # eef_step
      #                                0.0)         # jump_threshold
      #     #path_plan.append(plan)
      #     if(is_safe=='y'):
      #       print("Executing trajectory")
      #       group.execute(plan)
      # else:
      #   if(is_safe=='y'):
      #     print("Executing trajectory")
          



      print "============ Waiting while RVIZ displays plan3..."
      rospy.sleep(5)

      collision_object = moveit_msgs.msg.CollisionObject()
      moveit_commander.roscpp_shutdown()

      print "============ STOPPING"



if __name__ == '__main__':
  lines = [line.rstrip('\n') for line in open(FILE_PATH) if line.startswith(("MoveL")) ]
  ip_waypoints = []

  for line in lines:
    line = line.split(']', 1)[0]
    line = line[8:]
    coordinates  = line.split(',')
    ip_waypoints.append(coordinates)
 
  listener()

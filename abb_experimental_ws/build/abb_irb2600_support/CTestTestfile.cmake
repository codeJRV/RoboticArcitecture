# CMake generated Testfile for 
# Source directory: /home/jrv/Research/RoboticArcitecture/abb_experimental_ws/src/abb_experimental/abb_irb2600_support
# Build directory: /home/jrv/Research/RoboticArcitecture/abb_experimental_ws/build/abb_irb2600_support
# 
# This file includes the relevant testing commands required for 
# testing this directory and lists subdirectories to be tested as well.
add_test(_ctest_abb_irb2600_support_roslaunch-check_tests_roslaunch_test.xml "/home/jrv/Research/RoboticArcitecture/abb_experimental_ws/build/abb_irb2600_support/catkin_generated/env_cached.sh" "/usr/bin/python" "/opt/ros/kinetic/share/catkin/cmake/test/run_tests.py" "/home/jrv/Research/RoboticArcitecture/abb_experimental_ws/build/abb_irb2600_support/test_results/abb_irb2600_support/roslaunch-check_tests_roslaunch_test.xml.xml" "--return-code" "/usr/local/bin/cmake -E make_directory /home/jrv/Research/RoboticArcitecture/abb_experimental_ws/build/abb_irb2600_support/test_results/abb_irb2600_support" "/opt/ros/kinetic/share/roslaunch/cmake/../scripts/roslaunch-check -o '/home/jrv/Research/RoboticArcitecture/abb_experimental_ws/build/abb_irb2600_support/test_results/abb_irb2600_support/roslaunch-check_tests_roslaunch_test.xml.xml' '/home/jrv/Research/RoboticArcitecture/abb_experimental_ws/src/abb_experimental/abb_irb2600_support/tests/roslaunch_test.xml' ")
subdirs("gtest")

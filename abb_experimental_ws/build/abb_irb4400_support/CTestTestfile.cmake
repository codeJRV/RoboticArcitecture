# CMake generated Testfile for 
# Source directory: /home/jrv/Research/RoboticArchitecture/abb_experimental_ws/src/abb/abb_irb4400_support
# Build directory: /home/jrv/Research/RoboticArchitecture/abb_experimental_ws/build/abb_irb4400_support
# 
# This file includes the relevant testing commands required for 
# testing this directory and lists subdirectories to be tested as well.
add_test(_ctest_abb_irb4400_support_roslaunch-check_tests_roslaunch_test.xml "/home/jrv/Research/RoboticArchitecture/abb_experimental_ws/build/abb_irb4400_support/catkin_generated/env_cached.sh" "/usr/bin/python" "/opt/ros/kinetic/share/catkin/cmake/test/run_tests.py" "/home/jrv/Research/RoboticArchitecture/abb_experimental_ws/build/abb_irb4400_support/test_results/abb_irb4400_support/roslaunch-check_tests_roslaunch_test.xml.xml" "--return-code" "/usr/local/bin/cmake -E make_directory /home/jrv/Research/RoboticArchitecture/abb_experimental_ws/build/abb_irb4400_support/test_results/abb_irb4400_support" "/opt/ros/kinetic/share/roslaunch/cmake/../scripts/roslaunch-check -o '/home/jrv/Research/RoboticArchitecture/abb_experimental_ws/build/abb_irb4400_support/test_results/abb_irb4400_support/roslaunch-check_tests_roslaunch_test.xml.xml' '/home/jrv/Research/RoboticArchitecture/abb_experimental_ws/src/abb/abb_irb4400_support/tests/roslaunch_test.xml' ")
subdirs("gtest")

# CMake generated Testfile for 
# Source directory: /home/hemanth/neural_fly/src/ethzasl_msf/msf_core
# Build directory: /home/hemanth/neural_fly/build/msf_core
# 
# This file includes the relevant testing commands required for 
# testing this directory and lists subdirectories to be tested as well.
add_test(_ctest_msf_core_gtest_test_similaritytransform "/home/hemanth/neural_fly/build/msf_core/catkin_generated/env_cached.sh" "/usr/bin/python2" "/opt/ros/melodic/share/catkin/cmake/test/run_tests.py" "/home/hemanth/neural_fly/build/msf_core/test_results/msf_core/gtest-test_similaritytransform.xml" "--return-code" "/home/hemanth/neural_fly/devel/.private/msf_core/lib/msf_core/test_similaritytransform --gtest_output=xml:/home/hemanth/neural_fly/build/msf_core/test_results/msf_core/gtest-test_similaritytransform.xml")
add_test(_ctest_msf_core_gtest_test_static_statelist "/home/hemanth/neural_fly/build/msf_core/catkin_generated/env_cached.sh" "/usr/bin/python2" "/opt/ros/melodic/share/catkin/cmake/test/run_tests.py" "/home/hemanth/neural_fly/build/msf_core/test_results/msf_core/gtest-test_static_statelist.xml" "--return-code" "/home/hemanth/neural_fly/devel/.private/msf_core/lib/msf_core/test_static_statelist --gtest_output=xml:/home/hemanth/neural_fly/build/msf_core/test_results/msf_core/gtest-test_static_statelist.xml")
subdirs("gtest")

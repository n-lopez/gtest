cmake_minimum_required(VERSION 2.6)
add_executable(ChatTest ChatTest.cpp Chat.cpp) 
target_link_libraries(ChatTest gtest gtest_main gmock_main gmock pthread)

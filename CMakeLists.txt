cmake_minimum_required(VERSION 3.14)
project(GrowingTree)
set(CMAKE_CXX_STANDARD 20)
find_package(GTest REQUIRED)


add_executable(growing_tree
    src/main.cpp
    src/growingTree.cpp
)


add_executable(growing_tree_test 
    test/test_main.cpp 
    test/test_growingTree.cpp
    src/growingTree.cpp
)


target_link_libraries(growing_tree_test GTest::GTest GTest::Main)
target_include_directories(growing_tree PRIVATE include)
target_include_directories(growing_tree_test PRIVATE include)
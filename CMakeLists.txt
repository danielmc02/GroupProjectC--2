cmake_minimum_required(VERSION 3.10)
set(CMAKE_CXX_STANDARD 11)
project(C++ProjectGroupEdition)
add_executable(ExecuteMe src/main.cpp 
src/Course.cpp 
src/Course.h 
src/header/CourseList.h 
src/implementation/CourseList.cpp 
src/test_copy_constructor/TestCopyConstructor.cpp 
src/test_function/TestFunctions.cpp 
src/the_big_three/CourseListBigThree.cpp
src/course_list_insert_in_order/CourseListInsertInOrder.cpp)
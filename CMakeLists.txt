# root CMakeLists.txt
cmake_minimum_required (VERSION 3.8)

project ("template-cpp")

# global configurations
set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED TRUE)

set(CMAKE_THREAD_PREFER_PTHREAD TRUE)
set(THREADS_PREFER_PTHREAD_FLAG TRUE)
find_package(Threads REQUIRED)
link_libraries(Threads::Threads)

# add application
add_subdirectory("app")

# add test
include(CTest)

if(BUILD_TESTING)
	find_package(GTest REQUIRED)
	add_subdirectory("tests")
endif()

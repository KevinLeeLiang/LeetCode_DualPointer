cmake_minimum_required(VERSION 3.17)
project(DualPointer)

set(CMAKE_CXX_STANDARD 20)
include_directories(util)
add_executable(DualPointer main.cpp test_factory.h util/util.h L5_longestPalindrome/L5_longestPalindrome.cpp L5_longestPalindrome/L5_longestPalindrome.h L11_maxArea/L11_maxArea.cpp L11_maxArea/L11_maxArea.h L15_threeSum/L15_threeSum.cpp L15_threeSum/L15_threeSum.h L16_threeSumClosest/L16_threeSumClosest.cpp L16_threeSumClosest/L16_threeSumClosest.h)
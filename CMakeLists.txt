cmake_minimum_required(VERSION 3.28.0)
project(Leetcode VERSION 0.1.0 LANGUAGES C CXX)
file( GLOB APP_SOURCES ${CMAKE_CURRENT_SOURCE_DIR}/src/*.cpp )
include(CTest)
enable_testing()


foreach( sourcefile ${APP_SOURCES} )
    file(RELATIVE_PATH filename ${CMAKE_CURRENT_SOURCE_DIR}/src/ ${sourcefile})
    string( REPLACE ".cpp" "" file ${filename} )
    add_executable( ${file} ${sourcefile} )
endforeach( sourcefile ${APP_SOURCES} )
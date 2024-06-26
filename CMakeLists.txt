cmake_minimum_required(VERSION 3.27)
project(ASCII_Converter_QML)
set(CMAKE_CXX_STANDARD 17)

if (CMAKE_GENERATOR STREQUAL "Visual Studio 16 2019")
    message("-- MSVC Qt Path Set!")
    set(CMAKE_PREFIX_PATH "C:/devel/sdk/qt6/6.6.2/msvc2019_64/lib/cmake/Qt6")
elseif(UNIX)
    message("-- Linux Qt Path Set!")
    set(CMAKE_PREFIX_PATH "/usr/lib64/cmake/Qt6")
    add_definitions(-DLinux)
endif()


set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTORCC ON)
set(CMAKE_AUTOUIC ON)

find_package(Qt6 COMPONENTS Core Quick QuickControls2 REQUIRED)

include_directories(include)
add_subdirectory(source)
add_subdirectory(test)


#
##
#
########
#
##
#

###################
#					#
#    Google Test	#
#					#
###################



include(FetchContent)
FetchContent_Declare(
        googletest
        GIT_REPOSITORY https://github.com/google/googletest.git
        GIT_TAG v1.14.0 # most recent version 10/2023 Check GITHUB!
)

set(gtest_force_shared_crt ON CACHE BOOL "" FORCE)
FetchContent_MakeAvailable(googletest)

#
##
#
########
#
##
#
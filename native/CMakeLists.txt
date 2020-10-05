# For more information about using CMake with Android Studio, read the
# documentation: https://d.android.com/studio/projects/add-native-code.html

# Sets the minimum version of CMake required to build the native library.

cmake_minimum_required(VERSION 3.4.1)

# Creates and names a library, sets it as either STATIC
# or SHARED, and provides the relative paths to its source code.
# You can define multiple libraries, and CMake builds them for you.
# Gradle automatically packages shared libraries with your APK.

add_definitions(-std=c++11)

#设置java路径
set(java_home \"C\:\\Program Files\\Java\\jdk1.8.0_152\\include\")

#jni头文件
include_directories(${java_home}\\include\\
                    ${java_home}\\include\\win32)

add_library( # Sets the name of the library.
             native-lib

             # Sets the library as a shared library.
             SHARED

             # Provides a relative path to your source file(s).
             native-lib.cpp )

target_link_libraries( # Specifies the target library.
                       native-lib)
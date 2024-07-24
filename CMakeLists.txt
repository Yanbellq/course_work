cmake_minimum_required(VERSION 3.28)
project(course_work)

set(CMAKE_CXX_STANDARD 23)

add_executable(course_work main.cpp
        classes/Interface.h
        classes/Computers.cpp
        classes/Computers.h
        classes/WindowsOS_PC.cpp
        classes/WindowsOS_PC.h
        classes/MacOS_PC.cpp
        classes/MacOS_PC.h
        classes/FIleException.h
        classes/ChoiceException.h
        classes/PasswordException.h
        classes/TypeException.h
        classes/ID_Exception.h
        classes/Methods.cpp
        classes/Methods.h
)

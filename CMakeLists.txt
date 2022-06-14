cmake_minimum_required(VERSION 3.22)
project(builder)

set(CMAKE_CXX_STANDARD 14)

add_executable(builder main.cpp Student.h Person.h Contacts.h StudentBuilder.h Teacher.h PersonInfo.h TeacherBuilder.h)

cmake_minimum_required(VERSION 3.23)
project(Final)

set(CMAKE_CXX_STANDARD 14)

add_executable(Final main.cpp Person.cpp Person.h Medicine.cpp Medicine.h Utility.cpp Utility.h IDGenerator.h Doctor.cpp Doctor.h StoreManagement.cpp StoreManagement.h Patient.cpp Patient.h Order.cpp Order.h IDGenerator.cpp)

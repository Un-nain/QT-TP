cmake_minimum_required(VERSION 3.7)
project(TP_Qt)

set(CMAKE_CXX_STANDARD 14) # si nécessaire
set(CMAKE_AUTOMOC ON)
find_package(Qt5Widgets CONFIG REQUIRED)

add_executable(TP_Qt main.cpp IHM.cpp exo2.cpp)

target_link_libraries(TP_Qt Qt5::Widgets)
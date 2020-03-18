cmake_minimum_required(VERSION 3.7)
project(QT2)

set(CMAKE_CXX_STANDARD 11)

set(CMAKE_AUTOMOC ON)
find_package(Qt5Widgets CONFIG REQUIRED)
add_executable(QT2 main.cpp SQLClientWindow.cpp QMainWindow.cpp)
target_link_libraries(QT2 Qt5::Widgets)
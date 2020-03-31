cmake_minimum_required(VERSION 3.10)

# specify the C++ standard
set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED True)

# set the project name
project(Go_RL)

# Find the needed libraries
find_package(OpenGL REQUIRED)
find_package(GLUT REQUIRED)

# add the executable
add_executable(go go.cpp Board.cpp  Game.cpp Group.cpp  Move.cpp Player.cpp)

# Link the libraries to the files we wrote
include_directories( ${OPENGL_INCLUDE_DIRS}  ${GLUT_INCLUDE_DIRS} )

target_link_libraries(go ${OPENGL_LIBRARIES} ${GLUT_LIBRARY} )


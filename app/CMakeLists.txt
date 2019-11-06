# Add include directory
project(vec_str_app)
include_directories(${PROJECT_INCLUDE_DIR})

add_executable(app main.cpp)
target_link_libraries(app vec_str)
install(TARGETS app DESTINATION ${EXECUTABLE_INSTALL_DIR})

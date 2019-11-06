# Add include directory
project(project_name_app)
include_directories(${PROJECT_INCLUDE_DIR})

add_executable(app main.cpp)
target_link_libraries(app project_name)
install(TARGETS app DESTINATION ${EXECUTABLE_INSTALL_DIR})

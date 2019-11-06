# Add include directory
project(project_name_tests)

include_directories(${PROJECT_INCLUDE_DIR})

add_executable(unittest project_name_unit.cpp)

target_link_libraries(unittest gtest_main project_name)

add_test(NAME unit_test COMMAND unittest)

install(TARGETS unittest DESTINATION ${EXECUTABLE_INSTALL_DIR})

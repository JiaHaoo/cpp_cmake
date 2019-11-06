# Add include directory
project(vec_str_tests)

include_directories(${PROJECT_INCLUDE_DIR})

add_executable(unittest vec_str_unit.cpp)

target_link_libraries(unittest gtest_main vec_str)

add_test(NAME unit_test COMMAND unittest)

install(TARGETS unittest DESTINATION ${EXECUTABLE_INSTALL_DIR})

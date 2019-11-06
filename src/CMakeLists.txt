# Add include directory
project(project_name_libs)

include_directories(${PROJECT_INCLUDE_DIR})

add_library(project_name STATIC project_name.cpp)
# add_library(project_name SHARED project_name.cpp)

# set_target_properties(project_name PROPERTIES PUBLIC_HEADER ${PROJECT_INCLUDE_DIR}/project_name.h)

install(TARGETS project_name
	# LIBRARY DESTINATION ${LIB_INSTALL_DIR}
	DESTINATION ${LIB_INSTALL_DIR}
	# PUBLIC_HEADER DESTINATION ${HEADER_INSTALL_DIR}
)


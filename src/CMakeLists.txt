# Add include directory
project(vec_str_libs)

include_directories(${PROJECT_INCLUDE_DIR})

add_library(vec_str STATIC vec_str.cpp)
# add_library(vec_str SHARED vec_str.cpp)

# set_target_properties(vec_str PROPERTIES PUBLIC_HEADER ${PROJECT_INCLUDE_DIR}/vec_str.h)

install(TARGETS vec_str
	# LIBRARY DESTINATION ${LIB_INSTALL_DIR}
	DESTINATION ${LIB_INSTALL_DIR}
	# PUBLIC_HEADER DESTINATION ${HEADER_INSTALL_DIR}
)


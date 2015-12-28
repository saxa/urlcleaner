cmake_minimum_required (VERSION 2.6)
project (urlcleaner)
# The version number.
set (urlcleaner_VERSION_MAJOR 0)
set (urlcleaner_VERSION_MINOR 0)
set (urlcleaner_VERSION_MICRO 0)
 
# configure a header file to pass some of the CMake settings
# to the source code
configure_file (
	"${PROJECT_SOURCE_DIR}/config.h.in"
	"${PROJECT_BINARY_DIR}/config.h"
)
       
# add the binary tree to the search path for include files
# so that we will find config.h
include_directories("${PROJECT_BINARY_DIR}")
include_directories("${PROJECT_SOURCE_DIR}/src")
add_subdirectory(src)
       


add_executable(urlcleaner urlcleaner.c 
			  urlcleaner.h)
target_link_libraries(urlcleaner src)

# Add the install targets
install (TARGETS urlcleaner DESTINATION bin)
install (FILES "${PROJECT_BINARY_DIR}/src/urlcleaner.h"        
	         DESTINATION include)


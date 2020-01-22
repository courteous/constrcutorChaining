MESSAGE( STATUS "ADDING CONSTRUCOTR_DIR")


set( CONSTRUCOTR_SRC

	A.h A.cpp
	
	B.h B.cpp
	
	C.h C.cpp 
	
	D.h D.cpp
	
	E.h E.cpp
	
	F.h F.cpp

	)

set(LIB_TYPE SHARED)

add_library(src_elements ${LIB_TYPE} ${CONSTRUCOTR_SRC} )



target_include_directories(src_elements PUBLIC "${CMAKE_CURRENT_SOURCE_DIR}/")

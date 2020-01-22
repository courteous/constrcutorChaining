
#######################################################################################################
	
	SET (CMAKE_C_FLAGS_INIT                "-v -Wall ")
	SET (CMAKE_C_FLAGS_DEBUG_INIT          "-g")
	SET (CMAKE_C_FLAGS_MINSIZEREL_INIT     "-Os -DNDEBUG")
	SET (CMAKE_C_FLAGS_RELEASE_INIT        "-O4 -DNDEBUG")
	SET (CMAKE_C_FLAGS_RELWITHDEBINFO_INIT "-O2 -g")
	
	SET (CMAKE_CXX_FLAGS_INIT                "-v -Wall")
	SET (CMAKE_CXX_FLAGS_DEBUG_INIT          "-g")
	SET (CMAKE_CXX_FLAGS_MINSIZEREL_INIT     "-Os -DNDEBUG")
	SET (CMAKE_CXX_FLAGS_MINSIZEREL_INIT     "-O0 -DNDEBUG")
	SET (CMAKE_CXX_FLAGS_RELEASE_INIT        "-O4 -DNDEBUG")
	SET (CMAKE_CXX_FLAGS_RELEASE_INIT        "-O0 -DNDEBUG")
	SET (CMAKE_CXX_FLAGS_RELWITHDEBINFO_INIT "-O2 -g")
	
	 
	set(CMAKE_BUILD_TYPE Debug)
	set(DCMAKE_BUILD_TYPE RelWithDebInfo)
	MESSAGE( "Debugging is set to: "  ${CMAKE_BUILD_TYPE} )

	add_executable(mainTestFile  main.cpp)
	

	target_link_libraries(mainTestFile src_elements)


#######################################################################################################
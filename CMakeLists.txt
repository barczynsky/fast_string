cmake_minimum_required(VERSION 3.13)

# ----------------------------------------------------------------------------
set(THREADS_PREFER_PTHREAD_FLAG TRUE)
find_package(Threads REQUIRED)

enable_testing()
find_package(GTest REQUIRED)

# ----------------------------------------------------------------------------
add_executable(testFastString
	tests/test_fast_string.cpp
)
set_target_properties(testFastString
	PROPERTIES
		BUILD_TYPE Release
		CXX_STANDARD_REQUIRED YES
		CXX_STANDARD 17
		CXX_EXTENSIONS NO
)
target_include_directories(testFastString
	PRIVATE
		"include"
)
target_link_libraries(testFastString
	PRIVATE
		GTest::GTest
		Threads::Threads
)

# ----------------------------------------------------------------------------
add_test(
	NAME testFastString
	COMMAND testFastString
)

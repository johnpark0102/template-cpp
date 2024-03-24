#
set(TARGET "tests-template-cpp")

set(SRCS
	"test_sample.cpp"
)

add_executable(${TARGET} ${SRCS})

target_link_libraries(${TARGET} PRIVATE
	GTest::gtest
	GTest::gtest_main
	GTest::gmock
	GTest::gmock_main
)

add_test(NAME ${TARGET} COMMAND ${TARGET})

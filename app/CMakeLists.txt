#
set(TARGET "template-cpp")

set(SRCS
	"main.cpp"
)

add_executable(${TARGET} ${SRCS})

target_link_libraries(${TARGET} PRIVATE
	""
)

install(TARGETS ${TARGET}
	DESTINATION ${CMAKE_INSTALL_PREFIX}/bin
)

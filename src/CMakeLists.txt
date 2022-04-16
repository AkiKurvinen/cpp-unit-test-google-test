add_library(date_test)

target_sources(date_test
  PRIVATE
    Date.cpp
  PUBLIC
    Date.h
  )

target_include_directories(date_test
  PUBLIC
    ${CMAKE_CURRENT_LIST_DIR}
  )

# we use this to get code coverage
# flags are only valid with the GNU compiler and on Linux
if(CMAKE_CXX_COMPILER_ID MATCHES GNU AND CMAKE_HOST_SYSTEM_NAME STREQUAL "Linux")
  target_compile_options(date_test
    PUBLIC
      "--coverage"
    )
  target_link_options(date_test
    INTERFACE
      "--coverage"
    )
endif()

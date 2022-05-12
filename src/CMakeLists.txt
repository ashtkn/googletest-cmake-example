add_executable(${PROJECT_NAME}
  ${MY_SRCS}
  )
target_include_directories(${PROJECT_NAME} PUBLIC
  ${MY_INCLUDE_PATH}
  )

# Set compiler options
if(MSVC)
  target_compile_options(${PROJECT_NAME} PRIVATE /W4 /WX)
else()
  target_compile_options(${PROJECT_NAME} PRIVATE -Wall -Wextra -Wpedantic -Werror)
endif()

add_executable(suite_1_app
  test_hello.c
)

target_link_libraries(suite_1_app
  Unity
)

target_include_directories(suite_1_app PUBLIC
    ./../../src/ 
)

add_test(suite_1_test suite_1_app)
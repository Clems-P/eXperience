#include "unity.h"
#include "hello.c"

void setUp(void) {
    // set stuff up here
}

void tearDown(void) {
    // clean stuff up here
}

void test_function_should_doBlahAndBlah(void) {
    //test stuff
    hello();
    TEST_ASSERT_TRUE(1);
}

void test_function_should_doAlsoDoBlah(void) {
    //more test stuff
    general_kenobi();
    hello_there();
    TEST_ASSERT_TRUE(0);
}

// not needed when using generate_test_runner.rb
int main(void) {
    UNITY_BEGIN();
    RUN_TEST(test_function_should_doBlahAndBlah);
    RUN_TEST(test_function_should_doAlsoDoBlah);
    return UNITY_END();
}

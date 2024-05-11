#include "unity.h"
#include "my_string_func.h"

void setUp(void) {
    // Set up code (if needed)
}

void tearDown(void) {
    // Tear down code (if needed)
}

void test_my_length(void) {
    char text1[] = "Hello";
    char text2[] = "";
    
    TEST_ASSERT_EQUAL_INT(5, my_length(text1));
    TEST_ASSERT_EQUAL_INT(0, my_length(text2));
}

void test_my_to_upper(void) {
    char input[] = "Hello World";
    char output[12];  // Assuming the output array has sufficient space
    
    my_to_upper(input, output);
    
    TEST_ASSERT_EQUAL_STRING("HELLO WORLD", output);
}

int main(void) {
    UNITY_BEGIN();

    RUN_TEST(test_my_length);
    RUN_TEST(test_my_to_upper);

    return UNITY_END();
}
 
#include "unity.h"
#include "demo.h"

// Setup and teardown for Unity
void setUp(void)
{
    // Code to run before each test
}

void tearDown(void)
{
    // Code to run after each test
}

// Test cases
void test_sum(void)
{
    int a = 2, b = 3;
    TEST_ASSERT_EQUAL_INT(5, sum(a, b));

    a = -2;
    b = 2;
    TEST_ASSERT_EQUAL_INT(0, sum(a, b));
}

void test_difference(void)
{
    int a = 2, b = 3;
    TEST_ASSERT_EQUAL_INT(-1, difference(a, b));

    a = 2;
    b = -2;
    TEST_ASSERT_EQUAL_INT(4, difference(a, b));
}

void test_product(void)
{
    int a = 2, b = 3;
    TEST_ASSERT_EQUAL_INT(6, product(a, b));

    a = -2;
    b = 2;
    TEST_ASSERT_EQUAL_INT(-4, product(a, b));
}

void test_division(void)
{
    int a = 6, b = 3;
    TEST_ASSERT_EQUAL_INT(2, division(a, b));

    a = -4;
    b = 2;
    TEST_ASSERT_EQUAL_INT(-2, division(a, b));

    // Optional: test division by zero handling
    TEST_ASSERT_EQUAL_INT(0, division(5, 0));
}

void test_square(void)
{
    int a = 2;
    TEST_ASSERT_EQUAL_INT(4, square(a));

    a = -3;
    TEST_ASSERT_EQUAL_INT(9, square(a));
}

// Main test runner
int main(void)
{
    UNITY_BEGIN();

    RUN_TEST(test_sum);
    RUN_TEST(test_difference);
    RUN_TEST(test_product);
    RUN_TEST(test_division);
    RUN_TEST(test_square);

    return UNITY_END();
}

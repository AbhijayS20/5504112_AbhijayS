#include "leapyear.h"
#include "unity.h"
#include <stdio.h>

void setUp() {}
void tearDown() {}

void test_leapyear()
{
    // TEST_IGNORE();
    TEST_ASSERT_EQUAL(1, IsLeapYear(1996));
    TEST_ASSERT_EQUAL(1, IsLeapYear(2012));
    TEST_ASSERT_EQUAL(1, IsLeapYear(2024));
    TEST_ASSERT_EQUAL(1, IsLeapYear(2016));
}

void test_nonleapyear()
{
    TEST_ASSERT_EQUAL(0, IsLeapYear(1995));
    TEST_ASSERT_EQUAL(0, IsLeapYear(2010));
    TEST_ASSERT_EQUAL(0, IsLeapYear(2025));
    TEST_ASSERT_EQUAL(0, IsLeapYear(2014));
}

void test_centuries()
{
    TEST_ASSERT_EQUAL(1, IsLeapYear(2000));
    TEST_ASSERT_EQUAL(0, IsLeapYear(1900));
    TEST_ASSERT_EQUAL(1, IsLeapYear(1600));
    TEST_ASSERT_EQUAL(0, IsLeapYear(2100));
}

void test_invalidyear()
{
    TEST_ASSERT_EQUAL(-1, IsLeapYear(-2000));
    TEST_ASSERT_EQUAL(-1, IsLeapYear(-1900));
    TEST_ASSERT_EQUAL_INT(-1, IsLeapYear(-2100)); // TEST_ASSERT_EQUAL_INT - checks for interger datatype
}
int main()
{
    UNITY_BEGIN();

    RUN_TEST(test_leapyear);
    RUN_TEST(test_nonleapyear);
    RUN_TEST(test_centuries);
    RUN_TEST(test_invalidyear);

    return UNITY_TEST();
}
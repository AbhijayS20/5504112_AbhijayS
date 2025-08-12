Assertion:

TEST_ASSERT_TRUE(condition)
TEST_ASSERT_FALSE(condition)
TEST_ASSERT_EQUAL(expected, actual)
TEST_ASSERT_NOT_EQUAL(expected, actual)

TEST_ASSERT_GREATER_THAN(threshold value, actual value) (10, 11)
TEST_ASSERT_GREATER_THAN_OR_EQUAL(threshold value, actual value) (10, 10)

TEST_ASSERT_LESS_THAN(threshold value, actual value) (5, 3) //will pass
TEST_ASSERT_LESS_THAN_OR_EQUAL(threshold value, actual value) (5, 5) //will pass

TEST_ASSERT_EQUAL_INT(expected, actual)
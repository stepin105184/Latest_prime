
#include "unity.h"
#include "prime.h"
/* Required by the unity test framework */
void setUp(){}
/* Required by the unity test framework */
void tearDown(){}

void test_prime(void)
{
  TEST_ASSERT_EQUAL(0, prime(2));
  TEST_ASSERT_EQUAL(0, prime(3));
}
void test_non_prime(void)
{
  TEST_ASSERT_EQUAL(1, prime(4));
  TEST_ASSERT_EQUAL(1, prime(16));
}


int test_main(void)
{
/* Initiate the Unity Test Framework */
  UNITY_BEGIN();

/* Run Test functions */
  RUN_TEST(test_prime);
  RUN_TEST(test_non_prime);


  /* Close the Unity Test Framework */
  return UNITY_END();
}

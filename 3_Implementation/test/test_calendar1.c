#include "unity.h"
#include "calendar.h"
/* Required by the unity test framework */
void setUp(){}
/* Required by the unity test framework */
void tearDown(){}

void test_calendar(void)
{
  TEST_PASS_MESSAGE("PASS");
}


int test_main(void)
{
/* Initiate the Unity Test Framework */
  UNITY_BEGIN();

/* Run Test functions */
  RUN_TEST(test_calendar);


  /* Close the Unity Test Framework */
  return UNITY_END();
}

#include "unity.h"
#include <calender.h>

/* Modify these two lines according to the project */
#include <calender.h>
#define PROJECT_NAME    "Calender"

/* Prototypes for all the test functions */
void test_isLeapYear(void);
void test_getDayNumber(void);


/* Required by the unity test framework */
void setUp(){}
/* Required by the unity test framework */
void tearDown(){}

/* Start of the application test */
int main()
{
/* Initiate the Unity Test Framework */
  UNITY_BEGIN();

/* Run Test functions */
  RUN_TEST(test_isLeapYear);
  RUN_TEST(test_getDayNumber);
 

  /* Close the Unity Test Framework */
  return UNITY_END();
}

/* Write all the test functions */ 
void test_isLeapYear(void) {
  TEST_ASSERT_EQUAL(1, isLeapYear(2000));
  
  /* Dummy fail*/
  TEST_ASSERT_EQUAL(0, isLeapYear(2001));
}

void test_getDayNumber(void) {
  TEST_ASSERT_EQUAL(2, getDayNumber(5,9,2000));
  
  /* Dummy fail*/
  TEST_ASSERT_EQUAL(3, getDayNumber(29,2,2000));
}

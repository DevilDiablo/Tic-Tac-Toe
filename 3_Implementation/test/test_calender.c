#include "unity.h"
#include <calender.h>

/* Modify these two lines according to the project */
#include <calender.h>
#define PROJECT_NAME    "Calender"

/* Prototypes for all the test functions */
void test_isLeapYear(void);
void test_getDayNumber(void);

void test_leapYears(void);
void test_todayOf(void);
void test_days(void);
void test_getName(void);





// int isLeapYear( int year );        /* True if leap year */
// int leapYears( int year );         /* The number of leap year */
// int todayOf( int y, int m, int d); /* The number of days since the beginning of the year */
// long days( int y, int m, int d);   /* Total number of days */
// void calendar(int y, int m);       /* display calendar at m y */
// int getDayNumber(int d,int m,int y);
// char *getName(int day);
// void flush();


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
  RUN_TEST(test_leapYears);
  RUN_TEST(test_todayOf);
  RUN_TEST(test_days);
  RUN_TEST(test_getName);
 
  /* Close the Unity Test Framework */
  return UNITY_END();
}
// ----------------------------------------------


/* Write all the test functions */ 
void test_isLeapYear(void) {
  TEST_ASSERT_EQUAL(1, isLeapYear(2000));
  
  /* Dummy fail*/
  TEST_ASSERT_EQUAL(0, isLeapYear(2001));
}
// ----------------------------------------------


void test_getDayNumber(void) {
  TEST_ASSERT_EQUAL(2, getDayNumber(5,9,2000));
  
  /* Dummy fail*/
  TEST_ASSERT_EQUAL(3, getDayNumber(29,2,2000));
}
// ----------------------------------------------


void test_leapYears(void) {
  TEST_ASSERT_EQUAL(485, leapYears(2000));
  
  /* Dummy fail*/
  TEST_ASSERT_EQUAL(500, leapYears(2000));
}
// ----------------------------------------------

void test_todayOf(void) {
  TEST_ASSERT_EQUAL(2, todayOf(2000,9,5));
  
  /* Dummy fail*/
  TEST_ASSERT_EQUAL(3,  todayOf(2000,9,5));
}
// ----------------------------------------------

void test_days(void) {
  TEST_ASSERT_EQUAL(248,days(2000,9,1));
  
  /* Dummy fail*/
  TEST_ASSERT_EQUAL(249, days(2000,9,1));
}
// ----------------------------------------------

void test_getName(void) {
  TEST_ASSERT_EQUAL("Tuesday", getName(2));
  
  /* Dummy fail*/
  TEST_ASSERT_EQUAL("Tuesday", getName(3));
}
// ----------------------------------------------

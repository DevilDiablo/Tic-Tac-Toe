#include <stdio.h>
#include <stdlib.h>
#include "calender_structure.h"


#ifndef CALENDER_H_
#define CALENDER_H_

int isLeapYear( int year );        /* True if leap year */
int leapYears( int year );         /* The number of leap year */
int todayOf( int y, int m, int d); /* The number of days since the beginning of the year */
long days( int y, int m, int d);   /* Total number of days */
void calendar(int y, int m);       /* display calendar at m y */
int getDayNumber(int d,int m,int y);
char *getName(int day);
void flush();

int year,month, day;
    char choice;
    Note note;
    FILE *fp;

#endif
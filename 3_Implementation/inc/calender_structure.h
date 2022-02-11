
#ifndef calender_structure_H
#define calender_structure_H

/* Included to allow users to call functions from math library if required */
#include "math.h"

/* strcture definition must be reused by the users in their code */

typedef struct {
  int day;
  int month;
  int year;
  char note[255];
} Note;


#endif
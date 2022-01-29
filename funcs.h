#include <string>

using namespace std;

#ifndef FUNCS_H_INCLUDED
#define FUNCS_H_INCLUDED

//functions
void setup(); //enter initial info
void populate(); //will fill the grid with random numbers
int positive_int_only(string);

//vars
extern int x; extern int y;
extern short *grid;
// FUNCS_H_INCLUDED
#endif

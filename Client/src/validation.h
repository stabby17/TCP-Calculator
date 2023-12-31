#include <stdio.h>
#include <string.h>
#include <ctype.h>

#define MAX 64
#ifndef NULL
#define NULL   ((void *) 0)
#endif

int string_check(const char* str); // Checks that the string entered is in the correct format
int lenght_check(int leng);        // Checks that the string is not longer than 64 characters
int operator_check(char* str);     // Checks that the first token is an operand
int num_check(char* str);          // Checks that the other two tokens are numbers


#include "main.h"

/**
 * void swap_int - functions that swaps values of two integers
 *@a: first int
 *@b: second int
 * */
void swap_int(int *a, int *b);
{
	int c = *b;
	int d = *a;
	*a = c;
	*b = d;
}

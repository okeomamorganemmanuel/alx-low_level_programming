<<<<<<< HEAD
/*
 * File: 5-print_numbers.c
 * Auth: Brennan D Baraban
 */

#include <stdio.h>

/**
 * main - Prints all single digit numbers of base 10 starting from 0.
 *
 * Return: Always 0.
 */
int main(void)
{
	int num;

	for (num = 0; num < 10; num++)
		printf("%d", num);

	printf("\n");

=======
#include <stdio.h>
/**
 * main - entry point
 * return: always return 0 (success)
 */
int main(void)
{
	int x = 0;

	for (; x < 10 ; x++)
		printf("%d", x);
	putchar('\n');
>>>>>>> 133c687b834cdd16134293eb204498cbf4245428
	return (0);
}

#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always return 0 (Success)
 */
int main(void)
{
	char cA;
	char ca;

	for (cA = 'A'; cA <= 'Z'; cA++)
		for (ca = 'a'; ca <= 'Z'; ca++)
		{
			putchar(ca);
		putchar(cA);
		}
	putchar('\n');

	return (0);
}

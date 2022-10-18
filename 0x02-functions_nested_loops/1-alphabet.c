#include "main.h"

/**
 * main - function that prints the alphabet, in lowercase
 */
void print_alphabet(void)
{
	char x;

	for (x = '0'; x <= 'z'; x++)
	{
		_putchar(x);
	}
	_putchar('\n');
}

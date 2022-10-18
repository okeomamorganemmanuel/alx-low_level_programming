#include "main.h"

/**
 * print_alphabet_x10 - prints alphabets ten times
 */
void print_alphabet_x10(void)
{
	char x;
	int y;

	for (x = 'a'; x <= 'z'; x++)
	{
		for (y = '0'; y <= '9'; y++)
		{
			_putchar(y);
		}
		_putchar(x);
	}
	_putchar('\n');
}

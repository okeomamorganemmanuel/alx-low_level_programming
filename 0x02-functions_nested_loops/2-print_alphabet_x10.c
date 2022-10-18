#include "main.h"

/**
 * print_alphabet_x10 - prints alphabets ten times
 */
void print_alphabet_x10(void)
{
	int counter = 0;
	char letters;

	while (counter++ <= 9)
	{
		for (letters = 'a'; letters <= 'z'; letters++)
			_putchar(letters);
		_putchar('\n');
	}
}

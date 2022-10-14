#include <stdio.h>
/**
 * main - entry point
 * return: always return 0 (success)
 */
int main(void)
{
	int x = 0;

	for (; x < 10 ; x++)
		putchar('0' + x);
	putchar('\n');
	return (0);

}


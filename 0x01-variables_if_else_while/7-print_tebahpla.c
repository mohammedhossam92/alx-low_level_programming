#include <stdio.h>

/**
 * main - entry point for the program
 *Return: Always 0 (success)
 */

int main(void)
{
	char ch = 'z';

	while (ch >= 'a')
	{
	putchar(ch);
	ch--;
	}
	putchar('\n');
	return (0);
}


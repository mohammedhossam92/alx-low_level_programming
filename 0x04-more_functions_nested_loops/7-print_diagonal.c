#include "main.h"
/**
 * print_diagonal - function to print diagnoal
 * @n: for input
*/
void print_diagonal(int n)
{
	int fslash, space;

	if (n <= 0)
		_putchar('\n');
	else
	{
		for (fslash = 1; fslash <= n; fslash++)
		{
			for (space = 1; space <= fslash; space++)
				_putchar(' ');
			_putchar(92);
			_putchar('\n');
		}
	}
}

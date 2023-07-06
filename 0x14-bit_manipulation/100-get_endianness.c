#include "main.h"

/**
 * get_endianness - function
 *Return: 0 if big indianess and 1 for little indianess
 */

int get_endianness(void)
{
	unsigned long int n = 1;

	return (*(char *)&n);
}

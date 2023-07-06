#include "main.h"

/**
*binary_to_uint - converts binary number to int
*@b: string refering to the binary number
*Return: int
*
*/

unsigned int binary_to_uint(const char *b)
{
	/*declaring vars*/
	unsigned int number = 0;

	/*converting binary to int*/

	if (!b)
		return (0);
	while (*b)
	{
		if (*b != '0' && *b != '1')
			return (0);
		number = number * 2 + (*b++ - '0');
	}
	return (number);
}
#include "main.h"
/**
 * _pow_recursion - function the get the value x powered by y
 * @x: base integer
 * @y:exponent
 * Return: return the value of result
*/
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	else if (y == 1)
		return (x);
	else if (y == 0)
		return (1);
	else
		return (x * _pow_recursion(x, y - 1));
}

#include <stdio.h>

/**
 *add - function to add numbers
 *sub - function to sub numbers
 *mul - function to multiply the numbers
 *div - function to divide numbers
 *mod - function to
 *@a: number
 *@b: number
 *Return: zero
*/

int add(int a, int b)
{
	return (a + b);
}

int sub(int a, int b)
{
	return (a - b);
}

int mul(int a, int b)
{
	return (a * b);

}

int div(int a, int b)
{
	return (a / b);
}

int mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error: Division by zero \n");
		return (0);
	}
	return ( a % b);
}

#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - is the entry point of the program
 * Return: Always 0 (success)
*/
int main(void)
{
        int n, digit;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	digit = n % 10;
	if (digit > 0)
	{
      	printf("Last digit of %d is %d and is greater than 5\n", n, digit);
	}
	else if (digit == 0)
        {
        printf("Last digit of %d is %d and is and is 0\n", n, digit);
        }
        else if (digit < 6 && digit != 0)
        {
        printf("Last digit of %d is %d and is and is less than 6 and not 0\n", n, digit);
        }
        return (0);
}


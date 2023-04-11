#include <stdio.h>
#include <stdlib.h>
/**
 * main - main function
 *@argc: int
 *@argv: int
 *Return: 1 for success and 0 for fail
*/

int main(int argc, char *argv[])
{
	if (argc == 2)
	{
		int i;
		int least;
		int money;

		i = 0;
		least = 0;
		money = atoi(argv[1]);

		int cents[] = {25, 10, 5, 2, 1};

		for (i = 0; i < 5; i++)
		{
			if (money >= cents[i])
			{
				least += money / cents[i];
				money = money % cents[i];

				if (money % cents[i] == 0)
				{
					break;
				}
			}
		}
		printf("%d\n", least);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
	return (0);
}

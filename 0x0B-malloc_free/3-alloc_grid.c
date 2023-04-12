#include "main.h"
/**
 * **alloc_grid - function to return two dimensional array
 *@width: int
 *@height: int
 *Return: array
*/

int **alloc_grid(int width, int height)
{
	int **t;
	int i;
	int j;

	table = malloc(sizeof(*t) * height);

	if (width <= 0 || height <= 0 || t == 0)
	{
		return (NULL);
	}
	else
	{
		for (i = 0; i < height; i++)
		{
			tab[i] = malloc(sizeof(**t) * width);
			if (t[i] == 0)
			{
				while (i--)
					free(t[i]);
				free(t);
				return (NULL);
			}
			for (j = 0; j < width; j++)
				t[i][j] = 0;
		}
	}
	return (t);
}

#include "main.h"
#include <stdlib.h>
/**
 * **alloc_grid - pointer to a 2 dimensional array of integers
 *
 * @width: integer
 * @height: integer
 *
 * Return: pointer or null
 */
int **alloc_grid(int width, int height)
{
	int i, j;
	int **s;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}

	s = malloc(height * sizeof(*s));

	if (s == NULL)
	{
		return (NULL);
	}
	else
	{
		for (i = 0; i < height; i++)
		{
			s[i] = malloc(width * sizeof(int));
			if (s[i] == NULL)
			{
				return (NULL);
			}
			else
			{
				for (j = 0; j < width; j++)
				{
					s[i][j] = 0;
				}
			}
		}
		return (s);
	}
	free(s);
}

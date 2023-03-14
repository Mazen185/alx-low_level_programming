#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * *create_array - creates an array of chars
 *
 * @size: integer size
 * @c: char
 *
 * Return: Success
 */
char *create_array(unsigned int size, char c)
{
	unsigned int i;

	if (size == 0)
	{
		return ('\0');
	}
	else
	{
		char *ch;

		ch = malloc(size * sizeof(char));
		if (ch == NULL)
		{
			return ('\0');
		}
		else
		{
			for (i = 0; i < size; i++)
			{
				ch[i] = c;
			}
			return (ch);
		}
	}
}

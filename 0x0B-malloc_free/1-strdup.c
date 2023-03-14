#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * *_strdup - returns a pointer containing a copy
 *
 * @str: string
 *
 * Return: Success
 */
char *_strdup(char *str)
{
	int i, size;
	char *s;

	if (str == NULL)
	{
		return ('\0');
	}
	else
	{
		for (size = 1; str[size - 1] != '\0'; size++)
			;
		s = malloc(size * sizeof(char));
		if (s == '\0')
		{
			return ('\0');
		}
		else
		{
			for (i = 0; i < size; i++)
			{
				s[i] = str[i];
			}
			return (s);
		}
		free(s);
	}
}

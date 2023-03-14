#include "main.h"
#include <stdlib.h>
/**
 * **strtow - splits a string into words
 *
 * @str: char string
 *
 * Return: pointer or null
 */
char **strtow(char *str)
{
	char **s;

	if (str == NULL)
	{
		return (NULL);
	}
	else
	{
		s = malloc(4 * sizeof(char));

		if (s == NULL)
		{
			return (NULL);
		}
		else
		{
			return (s);
		}
	}
}

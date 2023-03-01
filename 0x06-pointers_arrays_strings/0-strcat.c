#include "main.h"
/**
 * _strcat - Concatenates two strings
 *
 * @dest: char dest
 * @src: char source
 *
 * Return: pointer char
 */
char *_strcat(char *dest, char *src)
{
	int dest_length = 0;
	int i;

	for (i = 0; dest[i] != '\0'; i++)
	{
		dest_length++;
	}
	for (i = 0; src[i] != '\0'; i++)
	{
		dest[dest_length + i] = src[i];
	}
	dest[dest_length + i] = '\0';

	return (dest);
}

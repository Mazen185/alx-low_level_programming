#include "main.h"
/**
 * _strncat - Concatenates two strings using bytes
 *
 * @dest: char dest
 * @src: char source
 * @n: int byte
 *
 * Return: pointer char
 */
char *_strncat(char *dest, char *src, int n)
{
	int dest_length = 0;
	int i;

	for (i = 0; dest[i] != '\0'; i++)
	{
		dest_length++;
	}
	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[dest_length + i] = src[i];
	}
	dest[dest_length + i] = '\0';

	return (dest);
}

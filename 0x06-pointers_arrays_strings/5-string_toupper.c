#include "main.h"
/**
 * *string_toupper - changes all lowercase to uppercase
 *
 * @ch: characters
 *
 * Return: characters
 */
char *string_toupper(char *ch)
{
	int i;

	for (i = 0; ch[i] != '\0'; i++)
	{
		if (ch[i] >= 'a' && ch[i] <= 'z')
			ch[i] = (int) ch[i] - 32;
	}
	return (ch);
}

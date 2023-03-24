#include "variadic_functions.h"
#include <stdio.h>
/**
 * print_strings - prints strings
 *
 * @separator: string to be printed
 * @n: number of integers parameters
 *
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	if (n != 0)
	{
		va_list args;
		unsigned int i;
		char *arg;

		va_start(args, n);
		for (i = 0; i < n - 1; i++)
		{
			arg = va_arg(args, char *);
			if (arg == NULL)
				printf("(nil)");
			else
				printf("%s", arg);
			if (separator != NULL)
				printf("%s", separator);
		}
		arg = va_arg(args, char *);
		if (arg == NULL)
			printf("(nil)");
		else
			printf("%s", arg);
		va_end(args);
	}
	printf("\n");
}

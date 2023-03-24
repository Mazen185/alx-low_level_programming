#include "variadic_functions.h"
#include <stdio.h>
/**
 * print_all - prints anything
 *
 * @format: string to be printed
 *
 */
void print_all(const char * const format, ...)
{
	va_list args;
	unsigned int i;
	unsigned int j;
	char *separator = "";

	optype_t list[] = {
		{"c", print_char},
		{"i", print_integer},
		{"f", print_float},
		{"s", print_string},
		{NULL, NULL}
	};

	va_start(args, format);
	i = 0;
	while (format != NULL && format[i] != '\0')
	{
		j = 0;
		while (list[j].c != NULL)
		{
			if (format[i] == list[j].c[0])
			{
				printf("%s", separator);
				list[j].f(args);
				separator = ", ";
			}
			j++;
		}
		i++;
	}
	printf("\n");
	va_end(args);
}

/**
 * print_char - print character
 *
 * @args: char
 *
 */
void print_char(va_list args)
{
	printf("%c", va_arg(args, int));
}
/**
 * print_integer - print integer
 *
 * @args: integer
 *
 */
void print_integer(va_list args)
{
	printf("%d", va_arg(args, int));
}
/**
 * print_float - print float
 *
 * @args: float
 *
 */
void print_float(va_list args)
{
	printf("%f", va_arg(args, double));
}
/**
 * print_string - print a string
 *
 * @args: string
 *
 */
void print_string(va_list args)
{
	char *s;

	s = va_arg(args, char *);
	if (s == NULL)
		s = "(nil)";
	printf("%s", s);
}

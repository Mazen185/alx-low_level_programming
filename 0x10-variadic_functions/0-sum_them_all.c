#include "variadic_functions.h"
/**
 * sum_them_all - sum all the parameters
 *
 * @n: number of arguments
 *
 * Return: Integer sum of arguments or O if fail
 */
int sum_them_all(const unsigned int n, ...)
{
	if (n == 0)
	{
		return (0);
	}
	else
	{
		va_list args;
		unsigned int sum = 0;
		unsigned int i;

		va_start(args, n);
		for (i = 0; i < n; i++)
		{
			sum = sum + va_arg(args, int);
		}
		va_end(args);
		return (sum);
	}
}

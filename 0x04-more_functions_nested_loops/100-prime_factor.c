#include <stdio.h>

void factor_prime(long);

/**
 * main - entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	factor_prime(1231952);
	return (0);
}

/**
 * factor_prime - prints the prime factors of a number
 * @n: number
 */

void factor_prime(long n)
{
	int i, x, count, res;

	for (i = n - 1; i > 0; i--)
	{
		count = 0;
		x = 1;
		while (x <= i)
		{
			if (i % x == 0 && i > 1)
				count++;
			x++;
		}
		if (count <= 2)
		{
			if (n % i == 0)
			{
				res = i;
				printf("%d ", res);
				break;
			}
		}
	}
	printf("\n");
}

#include "main.h"
/**
 * reverse_array - reverse the contant of an array of integers
 *
 * @a: an array of integers
 * @n: number of elements
 *
 */
void reverse_array(int *a, int n)
{
	int i;
	int temp_swap = 0;

	n--;

	for (i = 0; i < n / 2; i++)
	{
		temp_swap = a[i];
		a[i] = a[n - i];
		a[n - i] = temp_swap;
	}
}

#include "main.h"
#include <stdio.>
/**
 * print_array - print numbers in Array
 * @a: array
 * @n: numbers of value in an array
 */
void print_array(int *a, int n)
{
	int t;

	for (t = 0; t < n; t++)
	{
		printf("%d", a[t]);
		if (t != n - 1)
			printf(", ");
	}
	printf("\n");
}
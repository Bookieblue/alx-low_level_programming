#include <stdlib.h>
#include <stdio.h>
#include <time.h>
/**
 * main - Entry point
 * Description: prints if the number is positive or negative
 * Return: Always 0
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
	{
		printf("is positive\n", n);
	}
	else if (n == 0)
	{
		printf("is zero\n", n);
	}
	else if (n < 0)
	{
		printF("is negative\n", n);
	}
	return (0);
}

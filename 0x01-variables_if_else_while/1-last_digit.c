#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
* main - Entry Point
* Descriptions: print the last digit number
* Return: Always 0
*/
int main(void)
{
	int n = 0;

	int m = n % 10;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (m > 5)
	{
		printf("Last digit of %d is %d and is greater than 5\n", n, m);
	}
	else if (m == 0)
	{
		printf("Last digit of %d is %d and is 0\n", n, m);
	}
	else if (m < 6)
	{
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n, m);
	}
	return (0);
}

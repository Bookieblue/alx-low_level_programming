#include <stdio.h>
#include <stdlib.h>
/**
 * main -entry point
 * Descriptions: program to print number
 * Return: always 0
 */
int main(void)
{
	int number;

	for (number = 0; number <= 9; number++)
	{
		printf("%d", number);
	}
	printf("\n");
	return (0);
}

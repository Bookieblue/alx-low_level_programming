#include <stdio.h>
#include <stdlib.h>
/**
 * main - Entry
 * Descriptions: program to print program
 * Return: always 0
 */
int main(void)
{
	int num;

	for (num = 0; num <= 10; num++)
	{
		putchar((num % 10), ',');
	}
	putchar('\n');
		return (0);
}

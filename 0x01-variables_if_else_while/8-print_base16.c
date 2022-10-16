#include <stdio.h>
#include <stdlib.h>
/**
 * main - Entry point
 * Description: program to print numbers in base 16
 * Return: always 0
 */
int main(void)
{
	int base;

	for (base = 0; base < 10; base++)
	{
		putchar((base % 10) + '0');
	}
	for (base = 'a'; base <= 'f'; base++)
	{
		putchar(base);
	}
	putchar('\n');
	return (0);
}

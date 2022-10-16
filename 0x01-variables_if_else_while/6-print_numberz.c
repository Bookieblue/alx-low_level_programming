#include <stdio.h>
#include <stdlib.h>
/**
 * main - Entry point
 * Descriptions: program to print numbers
 * Return: always 0
 */
int main(void)
{
	 int numbers;

	 for (numbers = 0; numbers <= 9; numbers++)
	 {
		 putchar((numbers % 10) + '0');
	 }
	 putchar('\n')
		 return (0);
}

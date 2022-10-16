#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - Enry point
 * Descriptions: print alphabet in lowercase and uppercase
 * Return: Always 0
 */
int main(void)
{
	char lowereCase;

	char upperCase;

	for (lowerCase = 'a'; lowerCase <= 'z'; lowerCase++)
	{
		putchar(lowerCase);
	}
	for (upperCase = 'A'; upperCase <= 'Z'; uppercase++)
	{
		putchar(upperCase);
	}
	putchar('\n');
	return (0);
}

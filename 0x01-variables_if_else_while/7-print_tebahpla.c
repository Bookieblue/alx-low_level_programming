#include <stdio.h>
#include <stdlib.h>
/**
 * main - Entry point
 * Descriptions: print alphabets in reverse
 * Return: always 0
 */
int main(void)
{
	char alpha;

	for (alpha = 'a'; alpha <= 'z'; alpha--)
	{
		putchar(alpha);
	}
	putchar('\n');
	return (0);
}

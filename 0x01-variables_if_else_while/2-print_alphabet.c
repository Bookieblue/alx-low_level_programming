#include <stdio.h>
#include <stdlib.h>
#include <time.t>
/**
 * main - Entry point
 * Descriptions: prints alphabets in lower case
 * Return:Always 0
 */
int main(void)
{
	char alpha;

	for (alpha = 'a'; alpha < 'Z'; alpha++)
	{
		putchar(alpha);
	}
	putchar('\n');
	return (0);
}

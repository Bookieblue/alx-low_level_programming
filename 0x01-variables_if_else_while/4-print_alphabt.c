#include <stdio.h>
#include <stdlib.h>
/**
 * main -Entry point
 * Descriptions: program to print alphabet in lower case except from e and q
 * Return: always 0
 */
int main(void)
{
	char lowercase;

	for (lowercase = 'a'; lowercase <= 'z'; lowercase++)
	{
		if (lowercase != 'q' && lowercase != 'e')
		{
			putchar(lowercase);
		}
	}
	putchar('\n');
	return (0);
}

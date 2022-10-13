#include <stdio.h>

/**
 * main - Entry
 * Return: always
 */
int main(void)
{
	printf("the size of a char: %i byte(s)\n", sizeof(char));
	printf("the size of an int: %i byte(s)\n", sizeof(int));
	printf("the size of a long int: %i byte(s)\n", sizeof(long int));
	printf("the size of a long long int: %i byte(s)\n", sizeof(long long int));
	printf("the size of a float: %i byte(s)\n", sizeof(float));
	return (0);
}


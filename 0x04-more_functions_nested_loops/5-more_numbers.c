#include "main.h"

/**
 * more_numbers - prints 0 to 14 ten times
 * Return: Always 0
 */
void more_numbers(void)
{
	int i, num;

	for (i = 0; i <= 9; i++)
	{
		for (num = 0; num < 15; num++)
		{
			if (num > 9)
			{
				_putchar((num / 10) + '0')
			}
			_putchar((num % 10) + '0');
		}
	}
}

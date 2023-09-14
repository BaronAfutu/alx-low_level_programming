#include "main.h"

/**
 * print_most_numbers - a function that prints the numbers, from 0 to 9.
 * Do not print 2 and 4.
 * followed by a new line.
 * Return: Always 0
 */
void print_most_numbers(void)
{
	for (int i=0; i <= '9'; i++)
	{
		if (i != '0' && i != '14')
			_putchar(i);
	}
	_putchar('\n');
}

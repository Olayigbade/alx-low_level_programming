#include "main.h"
/**
 * print_sign - print the sign of a number
 *
 * @n: The number
 * Return: 1 and + if n is grater than 0
 * 0 and print 0 if n is less than 0
 * -1 and print - if n is less than 0
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar(43);
		return (1);
	}
	else if (n < 0)
	{
		_putchar(45);
		return (-1);
	}
	else
	{
		_putchar(48);
		return (0);
	}
	_putchar('\n');
}

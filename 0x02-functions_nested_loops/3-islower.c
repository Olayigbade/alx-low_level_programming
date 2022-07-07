#include "main.h"
/*
 * _islower - print out 1 if parameter recieved is lower else 0
 *
 * Return: 1 for lowercase 0 for upercase
 */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	else
	{
		return (0);

	}
	_putchar('\n');
}

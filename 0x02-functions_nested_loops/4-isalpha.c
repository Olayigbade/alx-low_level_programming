#include "main.h"
/**
 * _isalpha - Show 1 if the  input is a
 *
 * uppercase character. Another cases, shows
 * 0
 *
 * @c: The character in ACII code
 * Return: 1 for uppercase character. 0 for the rest.
 */
int _isalpha(int c)
{
	if (c >= 65 && c <= 122)
	{
		return (1);
	}
	else
	{
		return (0);
	}
	_putchar('\n');
}

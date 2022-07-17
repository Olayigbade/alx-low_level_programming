#include "main.h"
/**
 * _isdigit - a programme that returns 1 if pameter is digit
 * @c: input parameter
 *
 * Return: 1 if digit else 0
 */
int _isdigit(int c)
{
	if (c > 47 && c < 58)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

#include "main.h"
/**
 * _isupper - A function that return 1 if parameter c is uppercase
 * @c: Input character
 *
 * Return: 1 if isupper is true else 0
 */
int _isupper(int c)
{
	if (c > 64 && c < 91)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

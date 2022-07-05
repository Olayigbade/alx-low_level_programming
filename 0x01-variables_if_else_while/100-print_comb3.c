#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i, e, d;

	d = '1';
	for (i = '0'; i <= '9'; i++)
	{
		for (e = d; e <= '9'; e++)
		{
			if (e != i)
			{
				putchar(i);
				putchar(e);
				putchar(',');
				putchar(' ');
			}
			
		}
		d++;
	}
	putchar('\n');
	return (0);
}

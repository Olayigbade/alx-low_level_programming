#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i, e, j;

	j = '0';
	i = '0';
	e = '0';
	while (j <= '9')
	{
		i = '0';
		while (i <= '9')
		{
			e = '0';
			while (e <= '9')
			{
				if (i != j && e != i && j != e && i < e && j < i)
				{
					putchar(j);
					putchar(i);
					putchar(e);

					if (j == '7' && i == '8' && e == '9')
					{
						break;
					}
					putchar(',');
					putchar(' ');
				}
				e++;
			}
			i++;
		}
		j++;
	}
	putchar('\n');
	return (0);
}

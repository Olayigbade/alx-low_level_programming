#include <stdio.h>

/**
 * main - Entry point
 *
 * Discription: 'A progranm that print size of data type'
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
fprintf(stderr, "Size of a char: %d byte(s)\n", sizeof(char));
fprintf(stderr, "Size of a int: %d byte(s)\n", sizeof(int));
fprintf(stderr, "Size of a long int: %d byte(s)\n", sizeof(long int));
fprintf(stderr, "Size of a long long int: %d byte(s)\n", sizeof(long long int));
fprintf(stderr, "Size of a float: %d byte(s)\n", sizeof(float));
return (0);
}

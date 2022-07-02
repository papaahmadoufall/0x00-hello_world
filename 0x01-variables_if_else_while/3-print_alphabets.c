#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int n, m, y, x;

	n = 65;
	m = 97;
	x = 91;
	y = 122;
	/* LOWERCASE ALPHABET LOOP */
	while (x <= y)
	{
		putchar(x);
		x++;
	}
	/* LOWERCASE ALPHABET LOOP */
	while (n <= m)
	{
		putchar(n);
		n++;
	}
	putchar(10);
	return (0);
}

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
	int n;

	n = 65;
	while (n <= 90)
	{
		putchar(n);
		n++;
	}
	putchar(10);
	return (0);
}

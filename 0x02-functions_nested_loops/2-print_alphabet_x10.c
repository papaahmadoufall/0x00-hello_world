#include <stdlib.h>
#include <string.h>
#include "main.h"
#include <stdio.h>
#include "1-alphabet.c"

/**
 *print_alphabet_x10 - function that prints 10 times the alphabet,
 *in lowercase, followed by a new line.
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */

void print_alphabet_x10(void)
{
	int i;

	i = 0;
	while (i <= 10)
	{
		print_alphabet();
		i++;
	}
}

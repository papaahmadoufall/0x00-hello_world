#include <stdlib.h>
#include <string.h>
#include "main.h"
#include<stdio.h>
#include <ctype.h>

/**
 *print_alphabet_x10 - function that prints 10 times the alphabet,
 *in lowercase, followed by a new line.
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */

int _islower(int c)
{
	int r;

	r = islower(c);
	return (r);
}

#include "main.h"
#include <stdio.h>

/**
 * print_diagonal - diagonal lines made of backslashes
 * @n: number of \ to be printed
 * Return: void
 */

void print_diagonal(int n);
{
int i = 0, ii;

if (n > 0)
{
for (i = 0; i < n; i++)
{
for (ii = 0; ii < i; ii++)
_putchar(' ');

_putchar('\\');

if (i == (n - 1))
continue;
_putchar('\n');
}
}
_putchar('\n');
}

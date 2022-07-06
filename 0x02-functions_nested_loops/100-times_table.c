#include "main.h"

/**
 * print_times_table - print the times table with the parameter
 * @n: parameter
 * Return: void
 */

void print_times_table(int n)
{

int num, xply, result;

if (n <= 15 && n > 0)
{
for (num = 0; num <= n; num++)
{
_putchar('0');

for (xply = 0; xply <= n; xply++)
{
_putchar(',');
_putchar(' ');

result = num * xply;
if (result <= 99)
_putchar(' ');

if (result <= 9)
_putchar(' ');

if (result > 100)
{
_putchar((result / 100) + '0');
_putchar((result / 10) % 10 + '0');
}

else if (result <= 99 && result >= 10)
{
_putchar((result / 10) + '0');
}
_putchar((result % 10) + '0');
}
_putchar('\n');
}
}
}

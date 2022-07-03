#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - prints all possible combination
 * of 2-digit numbers
 * Return: always 0 (success)
 */
int main(void)
{
int c, i, k, j;

for (c = 0; c <= 57; c++)
{
for (i = 0; i <= 57; i++)
{
for (k = 0; k <= 57; k++)
{
for (j = 0; j <= 57; j++)
{
if (((k + j) > (c + i) && k >= c) || c < k)
{
putchar(c);
putchar(i);
putchar(k);
putchar(j);

if (c + i + k + j == 28 && c == 7)
{
break;
}
else
{
putchar(',');
putchar(' ');
}
}
}
}
}
}

putchar('\n');
return (0);
}

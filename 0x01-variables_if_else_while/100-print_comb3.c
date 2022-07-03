#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - prints numbers from 00 to 89
 * Return: always 0 (success)
 */

int main(void)
{
int c, i;

for (c = '00'; c <= '89'; c++)
{
for (i = '00'; i <= '89'; i++)
{
if (c < i)
{
putchar(c);

putchar(i);

if (c != '89' || (c == '88' && i != '89'))

{
putchar(',');

putchar(' ');
}
}
}
}
putchar('\n');

return (0);
}

#include <stdio.h>

/**
 * main - prints the first 52 fibonacci nunmbers
 * Return: void
 */

int main(void)
{
int k = 0;
long d = 1, w = 2;

while (k < 52)
{

if (k == 0)
printf("%ld", d);

else if (k == 1)
printf("%ld", w);

else
{
w += d;
d = w - d;
printf(", %ld", w);
}
++k;
}
printf("\n");
return (0);
}

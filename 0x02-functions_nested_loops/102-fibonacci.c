#include <stdio.h>

/**
 * main - prints the first 50 fibonacci nunmbers
 * Return: always 0
 */

int main(void)
{
int k;
unsigned long d1 = 1, d2 = 2;

for (k = 0; k < 50; k++)
{
d2 += d1;
printf("%lu", d2);

if (k == 0)
printf("\n");
else
printf(",");

}
return (0);
}

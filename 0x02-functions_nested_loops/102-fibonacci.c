#include <stdio.h>

/**
 * main - prints the first 50 fibonacci nunmbers
 * Return: always 0
 */

int main(void)
{
int k;
unsigned long d1 = 0, d2 = 1, d3;

for (k = 0; k < 50; k++)
{
d3 = d1 + d2;
printf("%lu", d3);
d1 = d2;
d2 = d3;

if (k == 49)
printf("\n");
else
printf(",");

}
return (0);
}

#include <stdio.h>

/**
 * main - prints the first 50 fibonacci nunmbers
 * Return: always 0
 */

int main(void)
{
int k = 0;
long d1 = 1, d2 = 2;

while (k < 50)
{

if (k == 0)
printf("%ld", d1);

else if (k == 1)
printf("%ld", d2);

else
{
d2 += d1;
d1 = d2 - d1;
printf(", %ld", d2);
}

++k;

}
printf("\n");
return (0);
}

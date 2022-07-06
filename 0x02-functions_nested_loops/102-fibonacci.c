#include <stdio.h>

/**
 * main - prints the first 50 fibonacci nunmbers
 * Return: always 0
 */

int main(void)
{
int k = 0;
long d = 1, w = 2;

while (k < 50)
{

if (k == 0)
printf("%ld", d);

else if (k == 1)
printf("%ld", w);

else
{
w += d;
d = w - d;
printf(", %ld", d2);
}

++k;

}
printf("\n");
return (0);
}

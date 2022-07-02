#include <stdlib.h>

#include <time.h>

#include <stdio.h>
/**
 * main - print the last digit of the random number stored in the variable n
 * Return: 0 if (Successful)
*/

int main(void)
{

int n;

srand(time(0));
n = rand() - RAND_MAX / 2;
printf("Last digit of %d is %d", n, n % 10);
if (n % 10 > 5)
{
	printf("Last digit of %d is %d and is greater than 5\n");
}
else if (n % 10 == 0)
{
	printf("Last digit of %d is %d and is 0\n");
}
else if (n % 10 < 6 && n % 10 != 0)
{
	printf("Last digit of %d is %d and is less than 6 not 0\n");
}
return (0);
}
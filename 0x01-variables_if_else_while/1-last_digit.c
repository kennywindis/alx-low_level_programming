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
printf("Last digit of %d is %d", n);
if (n > 5)
{
	printf("Last digit of %d is %d and is greater than 5");
}
if (n == 0)
{
	printf("Last digit of %d is %d and is 0");
}
if (n < 6 && n != 0)
{
	printf("Last digit of %d is %d and is less than 6 not 0");
}
printf("\n");

return (0);

}

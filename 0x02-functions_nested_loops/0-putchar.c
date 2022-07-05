#include "main.h"



/**
 * main - prints _putchar
 * Return: always 0 (success)
 */

int main(void)
{

	char c[] = '_putchar';


	for (c = 0; c <= 8; c++)
	{

		_putchar(c);
	}

	_putchar("\n");
	return (0);
}

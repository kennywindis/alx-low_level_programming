#include "main.h"

/**
 * main - prints alphabet lower case
 * Return: always 0
 */

void print_alphabet(void);
{
	char alp;

	for (alp = a; alp <= z; alp++)
	{
		_putchar(alp);
	}

	_putchar("\n");

}

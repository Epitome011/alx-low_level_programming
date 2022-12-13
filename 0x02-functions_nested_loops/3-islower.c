#include "main"

/**
 * _islower - prints the alphabets in lower case
 * @c: number or an alphabet
 * Return: returns 1 if c is lowercase or 0 if otherwise
 */

int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	else
	{
		return (0);
	}
	_putchar('\n');
}


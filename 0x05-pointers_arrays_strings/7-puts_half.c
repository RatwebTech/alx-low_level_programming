#include "holberton.h"

/**
 * puts_half - prints the second half of a string
 * @str: string
 */

void puts_half(char *str)
{
	int i, len = 0;

	while (str[len] != '\0')
		len++;

	for (i = (len + 1) / 2; str[i] != '\0'; i++)
		_putchar(str[i]);
	_putchar('\n');
}

#include "holberton.h"

/**
* print_alphabet - Prints Alphabet in lowercase.
*
* Return: Always 0 (Success)
*/

void print_alphabet(void)
{
int c;

for (c = 97; c <= 122; c++)
{
_putchar(c);
}
_putchar('\n');
return (0);
}

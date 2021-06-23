#include "holberton.h"

/**
* print_alphabet_x10 - prints alphabet 10 times in lowercase
*
* Return: 0
*/
void print_alphabet_x10(void)
{
int b, c;

for (b = 0; b <= 9; b++)
{
for (c = 97; c <= 122; c++)
{
_putchar(c);
}
_putchar('\n');
}
}

#include "holberton.h"

/**
 *print_last_digit - Prints the last digit of a number
 *
 *@y: input number is an integer.
 *
 *Return: last digit.
 */
int print_last_digit(int y)
{
if (y > 0 || y == 0)
{
_putchar (y % 10 + '0');
return (y % 10);
}
else
{
y = y * -1;
_putchar (y % 10 + '0');
return (y % 10);
}
}

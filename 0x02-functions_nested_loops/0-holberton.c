#include "holberton.h"

/**
 * main - Prints Holberton as a message
 *
 * Return : 0 (Success)
 */
int  main(void)
{
int str[] = {72, 111, 108, 98, 101, 114, 116, 111, 110};
int c, sz;

sz = sizeof(str) / sizeof(int);
for (c = 0; c < sz; c++)
{
_putchar(str[c]);
}
_putchar('\n');
return (0);
}

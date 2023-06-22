#include "main.h"
/**
* print_triangle - prints a triangle
* @size:size parameter of triangle
* Return:returns nothing
*/
void print_triangle(int size)
{
int sig1, sig2;
if (size > 0)
{
for (sig1 = 1; sig1 <= size; sig1++)
{
for ((sig2 = size - sig1); sig2 > 0; sig2--)
_putchar(' ');
for (sig2 = 0; sig2 < sig1; sig2++)
_putchar('#');
if (sig1 == size)
continue;
_putchar('\n');
}
}
_putchar('\n');
}

#include "main.h"
/**
* print_square - prints squares
* @size:is the size of the square
* Return:returns nothing
*/
void print_square(int size)
{
int p1, p2;
if (size > 0)
{
for (p1 = 0; p1 < size; p1++)
{
for (p2 = 0; p2 < (size - 1); p2++)
_putchar('#');
_putchar('#');
_putchar('\n');
}
}
else
{
_putchar('\n');
}
}

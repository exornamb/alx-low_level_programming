#include "main.h"
/**
* print_times_table - Prints the n times table
* @n: The number up to which the times table is printed
*/
void print_times_table(int n)
{
if (n < 0 || n > 15)
return;
int i, j, result;
for (i = 0; i <= n; i++)
{
for (j = 0; j <= n; j++)
{
result = i * j;
if (result > 99)
{
_putchar(result / 100 + '0');
_putchar((result / 10) % 10 + '0');
}
else if (result > 9)
{
_putchar(' ');
_putchar(result / 10 + '0');
}
else if (j != 0)
{
_putchar(' ');
_putchar(' ');
}
_putchar(result % 10 + '0');
if (j != n)
{
_putchar(',');
_putchar(' ');
}
}
_putchar('\n');
}
}

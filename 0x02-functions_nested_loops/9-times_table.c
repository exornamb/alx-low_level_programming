#include "main.h"
/**
*times_table - table
*/
void times_table(void)
{
int t, n, r;
for (t = 0; t <= 9; t++)
{
_putchar('0');
for (n = 1; n <= 9; n++)
{
_putchar(',');
_putchar(' ');
r = t * n;
if (r <= 9)
_putchar(' ');
else
_putchar(r / 10 + '0');
_putchar(r % 10 + '0');
}
_putchar('\n');
}

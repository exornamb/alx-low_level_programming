#include "main.h"
#include <stdio.h>
/**
* print_times_table - prints the n times table, starting with 0
* @n: the number of rows and columns in the times table
*/
void print_times_table(int n)
{
int row, col, result;
if (n < 0 || n > 15)
return;
for (row = 0; row <= n; row++)
{
for (col = 0; col <= n; col++)
{
result = row * col;
if (col != 0)
{
printf(", ");
if (result < 10)
printf(" ");
}
printf("%d", result);
}
printf("\n");
}
}

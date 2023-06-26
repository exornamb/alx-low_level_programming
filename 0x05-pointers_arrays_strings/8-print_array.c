#include "main.h"
/**
*print_array - print n element of array
*@a: array
*@n: number of elements
*Return: nothing
*/
void print_array(int *a, int n)
{
int j;
for (j = 0; j < n ; j++)
{
if (j != n - 1)
printf("%d, ", a[j]);
else
printf("%d", a[j]);
}
printf("\n");
}

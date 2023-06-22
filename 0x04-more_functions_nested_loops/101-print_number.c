#include "main.h"
/**
* print_number - Prints a number
* @n: The number to print
*/
void print_number(int n)
{
unsigned int numb = n;
if (n < 0)
{
_putchar('-');
numb = -numb;
}
if (numb > 9)
{
print_number(numb / 10);
}
_putchar(numb % 10 + '0');
}

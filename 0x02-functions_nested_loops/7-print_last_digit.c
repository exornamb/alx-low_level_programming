#include "main.h"
/**
*print_last_digit - prints the last digit of a number.
*@n: numbers
*Return: l and absolut value
*/
int print_last_digit(int n)
{
int l = n % 10;
if (l < 0)
l = -l;
_putchar (l + '0');
return (l);
}

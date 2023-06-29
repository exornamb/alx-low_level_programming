#include "main.h"
#include <stdio.h>
/**
 *print_number - prints an integer.
 *only using the putchar function.
 *noarrays and pointers.
 *@n: integer to be printed.
 *
 *Return: void.
 */
void _putchar(char c)
{
    putchar(c);
}
void print_number(int n)
{
    if (n < 0) {
        _putchar('-');
        n = -n;
}

    int divisor = 1;
    while (n / divisor > 9)
{
        divisor *= 10;
}

    while (divisor != 0)
{
        int digit = n / divisor;
        _putchar('0' + digit);
        n %= divisor;
        divisor /= 10;
}
}

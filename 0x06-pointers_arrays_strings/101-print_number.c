#include "main.h"
/**
* print_number - print an integer to screen
* @n: input variable
* Return: void
*/
void print_number(int n)
{
  if (n / 10)
  {
    print_number(n / 10);
  }
  _putchar((n % 10) + '0');
}

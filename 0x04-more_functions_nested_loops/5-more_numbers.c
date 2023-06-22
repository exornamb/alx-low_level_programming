#include "main.h"
/**
*more_numbers - prints numbers to 14
*
*Return: returns nothing
*/
void more_numbers(void)
{
int numb1, numb2;
for (numb1 = 0; numb1 < 10; numb1++)
{
for (numb2 = 0; numb2 <= 14; numb2++)
{
if (numb2 > 9)
{
_putchar((numb2 / 10) + '0');
}
_putchar((numb2 % 10) + '0');
}
_putchar(10);
}
}

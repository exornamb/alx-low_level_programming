#include "main.h"
/**
 *print_most_numbers -  function that prints the numbers, from 0 to 9
*/
void print_most_numbers(void)
{
int numb;
for (numb = 0; numb <= 9; numb++)
{
if ((numb == 2) || (numb == 4))
continue;
else
_putchar(numb + '0');
}
_putchar ('\n');
}

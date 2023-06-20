#include "main.h"
/**
 * void - void function
 * return -returns 0
*/
void print_alphabet_x10(void)
{
int j;
char i;
j = 0;
while (j < 10)
{
for (i = 'a'; i <= 'z'; i++)
_putchar (i);
j++;
_putchar ('\n');
}
return (0);
}

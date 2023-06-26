#include "main.h"
/**
 * puts_half - prints half of a string
 * @str: variable name
 * Return: half of input
*/
void puts_half(char *str)
{
int i, n, j;
j = 0;
for (i = 0; str[i] != '\0'; i++)
j++;
n = (j / 2);
if ((j % 2) == 1)
n = ((j + 1) / 2);
for (i = n; str[i] != '\0'; i++)
_putchar(str[i]);
_putchar('\n');
}

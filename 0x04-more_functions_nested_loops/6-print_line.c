#include "main.h"
/**
 *print_line - function that draws a straight line in the terminal
 *@n: is the number of times '_'  should be printed
*/
void print_line(int n)
{
int sig;
if (n <= 0)
{
_putchar ('\n');
}
else
{
for (sig = 1; sig <= n; sig++)
{
_putchar ('_');
}
_putchar ('\n');
}
}

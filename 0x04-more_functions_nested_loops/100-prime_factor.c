#include <stdio.h>
/**
* main- prints the largest prime factor
* of a number
* Return: returns 0
*/
int main(void)
{
long numb = 612852475143;
int sig;
while (sig++ < numb / 2)
{
if (numb % sig == 0)
{
numb /= 2;
continue;
}
for (sig = 3; sig < numb / 2; sig += 2)
{
if (numb % sig == 0)
numb /= sig;
}
}
printf("%ld\n", numb);
return (0);
}

#include <stdio.h>
/**
* main - print the first 98 Fibonacci numbers, starting with
* 1 and 2, separated by a comma followed by a space.
* Return - returns 0
*/
int main(void)
{
int c;
unsigned long f1 = 0, f2 = 1, s;
unsigned long f1h1, f1h2, f2h1, f2h2;
unsigned long h1, h2;
for (c = 0; c < 92; c++)
{
s = f1 + f2;
printf("%lu, ", s);
f1 = f2;
f2 = s;
}
f1h1 = f1 / 10000000000;
f2h1 = f2 / 10000000000;
f1h2 = f1 % 10000000000;
f2h2 = f2 % 10000000000;
for (c = 93; c < 99; c++)
h1 = f1h1 + f2h1;
h2 = f1h2 + f2h2;
if (f1h2 + f2h2 > 9999999999)
{
h1 += 1;
h2 %= 10000000000;
printf("%lu%lu", h1, h2);
if (c != 98)
printf(", ");
f1h1 = f2h1;
f1h2 = f2h2;
f2h1 = h1;
f2h2 = h2;
}
printf("\n");
return (0);
}

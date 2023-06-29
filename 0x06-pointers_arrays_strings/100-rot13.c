#include "main.h"
/**
* *rot13 - is a simple letter substitution cipher that replaces a letter
* @a: variable name
* Return: b value
*/
char *rot13(char *a)
{
char *b = a;
char *alpha = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz'\0'";
char *rot = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm'\0'";
int count;
for (count = 0; count <= 52; count++)
{
if (*a == alpha[count])
{
*a = rot[count];
}
a++;
}
return (b);
}

#include <stdio.h>
/**
* main - program that prints either number
* or fizz or buzz or fizzBuzz
* Return: always 0
*/
int main(void)
{
int numb;
for (numb = 1; numb <= 100; numb++)
{
if ((numb % 3) == 0 && (numb % 5) == 0)
printf("FizzBuzz");
else if ((numb % 3) == 0)
printf("Fizz");
else if ((numb % 5) == 0)
printf("Buzz");
else
printf("%d", numb);
if (numb == 100)
continue;
printf(" ");
}
printf("\n");
return (0);
}

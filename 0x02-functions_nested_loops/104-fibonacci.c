#include <stdio.h>
/**
* main - main function
* Return: nothing
*/
int main(void)
{
int counter;
unsigned long fibonacci[100];
fibonacci[0] = 1;
fibonacci[1] = 2;
printf("%lu, %lu", fibonacci[0], fibonacci[1]);
for (counter = 2; counter < 98; counter++)
{
fibonacci[counter] = fibonacci[counter - 1] + fibonacci[counter - 2];
printf(", %lu", fibonacci[counter]);
}
printf("\n");
return 0;
}

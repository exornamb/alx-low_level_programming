#include <stdio.h>
/**
* Print the first two Fibonacci numbers
* Variable to store the next Fibonacci number
*/
void print_fibonacci_numbers();
int main()
{
    print_fibonacci_numbers();
    return 0;
}

void print_fibonacci_numbers()
{
unsigned int fib1 = 1;
unsigned int fib2 = 2;
printf("%u, %u, ", fib1, fib2);
unsigned int fib_next;
for (int i = 3; i <= 98; i++) 
{
fib_next = fib1 + fib2;
printf("%u", fib_next);
if (i != 98) 
{
printf(", ");
}
fib1 = fib2;
fib2 = fib_next;
}
printf("\n");
}

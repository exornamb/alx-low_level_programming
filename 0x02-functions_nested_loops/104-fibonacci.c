#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
    double a = 1, b = 2, c;
    int count;

    printf("%.0f, %.0f", a, b);

    for (count = 3; count <= 98; count++)
    {
        c = a + b;
        printf(", %.0f", c);

        a = b;
        b = c;
    }

    printf("\n");

    return 0;
}

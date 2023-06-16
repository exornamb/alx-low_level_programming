#include <stdio.h>
/**
 * main - main function
 *
 * Return: returns 0
 */
int main(void)
{
	int i;
	int j;
	int k;
	for (i = 0; i < 7; i++) {
        for (j = i + 1; j < 8; j++) {
        for (k = j + 1; k < 9; k++) {
                putchar(i + '0');
                putchar(j + '0');
                putchar(k + '0');

                if (i < 6 || j < 7 || k < 8) {
                    putchar(',');
                    putchar(' ');
                }
            }
        }
    }
    return 0;
}

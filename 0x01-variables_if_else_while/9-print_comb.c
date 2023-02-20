#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
    int i, j;

    for (i = 0; i < 10; i++)
    {
        for (j = i; j < 10; j++)
        {
            if (j != i)
            {
                putchar(i + '0');
                putchar(j + '0');
                putchar((i == 8 && j == 9) ? '\n' : ',');
                putchar((i == 8 && j == 9) ? 0 : ' ');
            }
        }
    }

    return (0);
}

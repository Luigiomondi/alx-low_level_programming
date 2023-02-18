#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - prints whether number is positive, negative or 0
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n;

	srand(time(0));
	n= rand ()- RAND_MAX / 2;
	if (n>0)
	{
		printf("%d is positive \n", n);
	}
	else if (n== o)
	{
		printf("%d iszero\n", n);
	}
	else
	{
		printf("%d in negative\n", n);
	}
	return (0);
}


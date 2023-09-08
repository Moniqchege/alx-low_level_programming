#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - determines if a number is positive, negative or zero
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
	{
		printf("%d is positive\n", n);
	}
	else
	{
		printf("%d id negative\n", n);
	}
	return (0);
}

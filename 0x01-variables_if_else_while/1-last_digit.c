#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/* more headers goes there */

/* betty style doc for function main goes there */
/**
 * main - Entry point
 * Return: Always 1 (Success)
 */
int main(void)
{
	int n, last_digit;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	last_digit = n % 10;
	printf("Last digit of %d is %d", n, last_digit);
	if (last_digit > 5)
{
	printf(" and is greater than 5\n");
}

	else if (last_digit < 1 && last_digit > -1)
{
		printf(" and is 0\n");
}
	else if (last_digit < 6 && last_digit != 0)
{
		printf(" and is less than 6 and not 0\n");
}
	return (0);
}

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (success)
 */
int main(void)
{
int n;
srand(time(0));
n = rand() - RAND_MAX / 2;

printf("last digit of %d is ", n);
if (n > 5)
	printf("greater than 5");
if (n == 0)
	printf("0");
if (n < 6 && n != 0)
	printf("less than 6 not equals 0");
printf("\n");
return (0);
}

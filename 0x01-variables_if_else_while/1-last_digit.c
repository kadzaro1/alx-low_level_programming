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
int lastd;
srand(time(0));
n = rand() - RAND_MAX / 2;
if (lastd > 5)
	printf("last digit of %d is %d and is greater than 5\n", n, lastd);
else if (lastd == 0)
	printf("last digit of %d is %d and it is 0\n", n, lastd);
else
	printf("last digit of %d is %d and its less than 6 and not 0\n", n, lastd);
return (0);
}

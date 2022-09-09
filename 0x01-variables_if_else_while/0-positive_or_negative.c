#include <stdlib.h>
#include <stdio.h>
#include <time.h>
/**
 *  main - Entry point
 *  Return: Always 0 (Success)
*/

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */

	if (n > 0)
		printf("%s\n", "is positive");
	else if (n < 0)
		printf("%s\n", "is negative");
	else
		printf("%s\n", "is zero");
	return (0);
}

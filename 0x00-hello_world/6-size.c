#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
*/

int main(void)
{
	printf("Size of a char: %ld byte(s)\n"
			"Size of an int: %ld bytes(s)\n"
			"Size of a long int: %ld byte(s)\n"
			"Size of a long long int: %ld byte(s)\n"
			"Size of a float: %ld byte(s)\n", 
			(long unsigned int)sizeof(char), 
			(long unsigned int)sizeof(int),
			(long unsigned int)sizeof(long int), 
			(long unsigned int)sizeof(long long int), 
			(long unsigned int)sizeof(float));
	return (0);
}

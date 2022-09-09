#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
*/

int main(void)
{
	int i = 97;
	int j = 65;

	for (; i <= 122; i++)
	{
		putchar(i);
	}

	for (; j <= 90; j++)
	{
		putchar(j);
	}

	putchar('\n');
	return (0);
}

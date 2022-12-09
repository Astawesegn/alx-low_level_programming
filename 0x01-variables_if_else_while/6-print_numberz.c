#include<stdio.h>
#include<stdlib.h>

/**
 * main - that prints all single digit numbers of base 10
 *
 * Return: Always 0 (Success)
 *
 */

int main(void)
{
	int n;

	for (n = 48; n < 58; n++)
	{
		putchar(n);
	}
	putchar('\n');
	return (0);
}

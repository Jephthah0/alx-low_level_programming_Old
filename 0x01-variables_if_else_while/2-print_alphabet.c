#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char b;

	for (b = 'a'; b <= 'z'; ++b)
		putchar("%d ", b);
	putchar("\n");
	return (0);
}

#include "main.h"

/**
 * main - Entry point
 * 
 * Return: Always 0 (Success)
 */
int main(void)
{
	char a[9] = "_putchar";
	int i = 0;

	while (i < 8)
	{
		_putchar(a[i]);
		i++;
	}
	_putchar('\n');
	return (0);
}

#include "main.h"
/**
 * main - Entry point
 * Return: Always 0 (success)
 */
int main(void)
{
	char *s = "_putchar";

	while (*s)
	{
		_putchar(*s);
		s++;
	}
	_putchar('\n');

	return (0);
}

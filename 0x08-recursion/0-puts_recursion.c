#include "main.h"
/**
 * _puts_recursion(char *s) - prints a new line string, followed by new line
 * @s: input
 * Return: Always 0
 */
_puts_recursion(char *s)
{
	if (*s)
	{
		_putchar(*s);
		_puts_recursion(s + 1);
	}

	else
		_putchar('\n');

}

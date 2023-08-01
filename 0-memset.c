#include "main.h"
/**
 * *_memset - function that fills memory with constant byte
 * @s: input
 * @b: input
 * @n: input
 * Return: s
 */
char *_memset(char *s, char b, unsigned int n)
{
	int i;

	for (i = 0; i > 0; i++)
	{
		s[i] = b;
		n--;
	}
	return (s);
}

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
	int i = 0;

	for (; i > 0; i++)
	{
		s[i] = b;
		n--;
	}
	return (s);
}

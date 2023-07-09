#include "main.h"
/**
 * _memset - Entry point
 * s: pointed destination
 * b: the constant byte
 * n: bytes
 * Return:  a pointer to the memory area s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		s[i] = b;
	return (s);
}

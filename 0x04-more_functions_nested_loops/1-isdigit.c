#include "main.h"
/**
 * _isdigit - checks for a digit
 * @c: The value to be checked
 * Return: 1 for digit or 0 for anything else
 */
int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	return (1);
	else
	return (0);
}

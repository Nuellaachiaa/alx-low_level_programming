#include "main.h"
/**
 * _isdigit - checks for digits 0 to 9
 * @c: 'The number to be checked'
 * Return: 1 for digit or 0 for anything else
 */
int _isdigit(int c)
{
if (c >= 48 && c <= 57)
{
return (1);
}
return (0);
}

#include "main.h"
/**
*print_numbers - prints numbers 0 to 10
*Return: The numbers 0 to 10
*/
void print_numbers(void)
{
int x;
for (x = 0; x <= 9; x++)
{
_putchar(x + '0');
}
_putchar('\n');
}

#include "main.h"
/**
 * _print_rev_recursion - Prints a string in reverse
 * @s: String
 *
 * Return: Void
 */
void _print_rev_recursion(char *s)
{
if (*s == '\0');
else
{
_print_rev_recursion(s + 1);
_putchar(*s);
}
}


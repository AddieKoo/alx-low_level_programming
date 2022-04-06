#include "main.h"
/**
 * _puts - prints a string
 * @str: string to print
 * Return: number of char printed
 */
void _puts(char *s)
{
while (*s)
_putchar(*s++);
_putchar('\n');
}

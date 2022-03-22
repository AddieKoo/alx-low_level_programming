#include <unistd.h>

/**
 * _putchar - writes the character c to standard output
 * @c: character to print
 *
 * Return: on success 1
 * On error, -1 is returned, and error is therefore returned
 */
int _putchar(char c)
{
return (write(1, &c, 1));
}

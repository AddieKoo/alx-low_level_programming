#include "main.h"
/**
 * _isupper - function that verifies if a character is uppercase or not
 * @c: tested character
 * Return: 1 if uppercase, 0 else
 */
int _isupper(int c)
{
if ((c >= 'A') && (c<= 'Z'))
return (1);
return (0);
}

#include "main.h"
/**
 * _islower - controls lowercase char
 * @c: char to be verified
 * Return: 0 or 1
 */
int _islower(int c)
{
if (c >= 'a' && c <= 'z')
return (1);
return (0);
}

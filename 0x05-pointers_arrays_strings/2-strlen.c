#include "main.h"

/**
 * _strlen - returns the length of a string
 * @s: a pointer to an int that will be updated
 *
 * Return: void that means answer is correct
 */
int _strlen(char *s)
{
int u;
u = 0;
while (s[u] != '\0')
{
u++;
}
return (u);
}

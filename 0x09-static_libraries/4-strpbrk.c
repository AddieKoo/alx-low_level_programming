#include "main.h"
/**
 * _strpbrk - checks bytes in accept in str s
 * @s: string to be searched
 * @accept: string where searched bytes are found
 * Return: pointer to byte in s matching byte in accept else NULL
 */
char *_strpbrk(char *s, char *accept)
{
int i;
while (*s)
{
for (i = 0; accept[i]; i++)
{
if (accept[i] == *s)
return (s);
}
s++;
}
return ('\0');
}

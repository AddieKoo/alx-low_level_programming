#include "main.h"
/**
 * _strcat - concatenates two strings but add inputted bytes
 * @dest: string to be appended
 * @src: string to be finished at end of dest
 * @n: integer parameter to compare index to
 * Return: new concatenated string
 */
char *_strncat(char *dest, char *src, int n)
{
int index = 0, dest_len = 0;
while (dest[index++])
dest_len++;
for (index = 0; src[index] && index < n; index++)
dest[dest_len++] = src[index];
return (dest);
}

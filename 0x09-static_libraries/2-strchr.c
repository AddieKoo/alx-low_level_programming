#include "main.h"
#include <stddef.h>
/**
 * _strchr - send pointer to first c char in str s or else NULL  
 *@s: string targeted
 *@c: character targeted
 *Return: pointer to first c char
 */
char *_strchr(char *s, char c)
{
int i;
for (i = 0; (s[i] != c) && (s[i] != '\0'); i++)
;
if (s[i] == c)
return (s+i);
else
return (NULL);
}

#include "main.h"
#include "stddef.h"
/**
 * _strstr - locates a substring
 * @haystack: string to be checked
 * @needle: string to be checked
 *
 * Return: a pointer to the beginning of the located substring
 */
char *_strstr(char *haystack, char *needle)
{
int i = 0, flag = 0;
if (*needle == '\0')
{
return (haystack);
}
for (; haystack[i] != '\0'; i++)
{
int j = 0;
if (haystack[i] == needle[0])
{
if (haystack[i + j] != needle[j])
{
flag = 0;
break;
}
else
flag = 1;
j++;
}
if (flag)
break;
}
if (flag)
return (haystack + i);
else
return (NULL);
}

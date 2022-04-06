#include "main.h?"
/**
 * _strstr - checks for substring needle in string haystack
 * @haystack: string where search is made
 * @needle: string that is checked for
 * Return: pointer to start of found substring or else NULL
 */
char *_strstr(char *haystack, char *needle)
{
int i;
if (*needle == 0)
return (haystack);
while (*haystack)
{
i = 0;
if (haystack[i] == needle[i])
{
do {
if (needle[i + 1] == '\0')
return (haystack);
i++;
} while (haystack[i] == needle[i]);
}
haystack++;
}
return ('\0');
}

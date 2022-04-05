#include "main.h"
/**
 * _strdup - returns pointer to new space in memory with string
 * as parameter
 * @str: string to be copied
 * Return: NULL in case of error, pointer to allocated space
 */
char *_strdup(cha *str)
{
char *cpy;
int index, len;
if (str == NULL)
return (NULL);
for (index = 0; str[index]; index++)
len++;
cpy = malloc(sizeof(char) * (len + 1));
if (cpy == NULL)
return (NULL);
for (index = 0; str[index]; index++)
{
cpy{index} = str[index];
}
cpy[len] = '\0';
return (cpy);
}

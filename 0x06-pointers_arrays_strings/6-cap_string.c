#include "main.h"
/**
 * cap_string - capitalizes all words of a string
 * @str: string
 *
 * Return: char
 */
char *cap_string(char *str)
{
int i;
for (i = 0; str[i] != '\0'; i++)
{
if (str[i] >= 'A' && str[i] <= 'Z')
{
str[i] = str[i] - 32;
}
}
return (str);
}

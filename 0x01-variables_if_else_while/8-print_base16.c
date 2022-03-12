#include <stdio.h>
/**
 * main - Main function
 * Description: program to printall single digit base 10 numbers
 * Return: prints the numbers
 */
int main(void)
{
int ch;
for (ch = '0'; ch <= 'f'; ch++)
if (ch >= 'a' && ch <= 'f')
{
putchar(ch);
}
else if (ch >= '0' && ch <= '9')
{
putchar(ch);
}
putchar('\n');
return (0);
}

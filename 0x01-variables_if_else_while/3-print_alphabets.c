
#include <stdio.h>
/**
 * main - Main function
 * Description: program to print alphabet in lowercase and uppercase
 * Return: prints the alphabet
 */
int main(void)
{
int ch;
for (ch = 'a'; ch <= 'z'; ch++)
putchar(ch);
for (ch = 'A'; ch <= 'Z'; ch++)
putchar(ch);
putchar('\n');
return (0);
}

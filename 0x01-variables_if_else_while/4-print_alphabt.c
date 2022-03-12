
#include <stdio.h>
/**
 * main - Main function
 * Description: program to print alphabet in lowercase
 * Return: prints the alphabet
 */
int main(void)
{
int ch;
for (ch = 'a'; ch <= 'z'; ch++)
if ((ch != 'e') && (ch != 'q'))
{
	putchar(ch);
}
	putchar('\n');
return (0);
}


#include <stdio.h>
/**
 * main - Main function
 * Description: program to print alphabet in lowercase in reverse
 * Return: prints the alphabet
 */
int main(void)
{
int ch;
for (ch = 'z'; ch >= 'a'; --ch)
putchar(ch);
putchar('\n');
return (0);
}


#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - Main function
 * Description: program to check the last digit of a number
 * Return: ends the program
 */
int main(void)
{
int n;
int lastdigit;
srand(time(0));

n = rand() - RAND_MAX / 2;
lastdigit = n % 10;
if ((n % 10 < 6) && (n % 10 != 0))
{
	printf("Last digit of %d is %d and is less than 6 and not 0\n", n, lastdigit);
}
	else if (n % 10 == 0)
{
	printf("Last digit of %d is %d and is 0\n", n, lastdigit);
}
else
{
	printf("Last digit of %d is %d is greater than 5\n", n, lastdigit);
}
return (0);
}

#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>

void positive_or_negative(int i);
{
	if( i < 0)
	{
		printf("i is negative\n");
	}
	else if( i == 0)
	{
		printf("i is zero\n");
	}
	else
	{
		printf("i is positive\n");
	}
}
#endif


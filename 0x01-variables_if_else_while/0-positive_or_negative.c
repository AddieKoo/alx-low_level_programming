#include <stdio.h>
#include <stlib.h>
#include <time.h>
int main()
{
int rand_num;
srand(time(0));
printf("The randomly generated number is");
rand_num = rand();
printf("%d\n", rand_num);
}

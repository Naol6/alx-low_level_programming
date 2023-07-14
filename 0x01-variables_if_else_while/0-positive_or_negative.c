#include<stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - initialize int n
 * using if,else if, else we write the code
 * Return: 0
*/
int main(void)
{
int n;

srand(time(0));
n = rand() - RAND_MAX / 2;
/* your code goes there */
printf("%d ", n);

if (n > 0)
{
printf("is positive\n");
}
else if (n == 0)
{
printf("is zero\n");
}
else
{
printf("is negative\n");
}
return (0);
}

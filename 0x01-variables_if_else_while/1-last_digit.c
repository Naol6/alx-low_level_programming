#include<stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - using if,else if and else statement we do our code
 * Return: 0
*/
int main(void)
{
int n;

srand(time(0));
n = rand() - RAND_MAX / 2;
/* your code goes there */
int lastdigit;
lastdigit= abs(n) % 10;
printf(" %d ", n);
if (lastdigit > 5)
{
printf("greater than 5\n");
}
else if (lastdigit == 0)
{
printf("0\n");
}
else
{
printf("less than 6 and not 0\n ");
}

return (0);
}

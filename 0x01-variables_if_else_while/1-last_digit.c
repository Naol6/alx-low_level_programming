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
int lastdigit;

srand(time(0));
n = rand() - RAND_MAX / 2;
/* your code goes there */
lastdigit = n % 10;
printf("Last digit of %d ", n);
if (lastdigit > 5)
{
printf("is %d and is greater than 5\n", lastdigit);
}
else if (lastdigit == 0)
{
printf("is %d and is 0\n", lastdigit);
}
else
{
printf("is %d and is less than 6 and not 0\n", lastdigit);
}

return (0);
}

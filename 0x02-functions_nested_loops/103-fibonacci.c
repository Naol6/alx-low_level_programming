#include <stdio.h>

/**
 * main - print the sum
 * Return: type 0
 */
int main(void)
{
int i;
unsigned long int j, k, x, sum;
j = 1;
k = 2;
sum = 0;
for (i = 1; i <= 33; ++i)
{
if (j < 4000000 && (j % 2) == 0)
{
sum += j;
}
x = j + k;
j = k;
k = x;
}
printf("%lu\n", sum);
return (0);
}

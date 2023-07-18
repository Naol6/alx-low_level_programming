#include <stdio.h>
/**
 * main - int limit,sum
 * Return: 0
*/

int main(void)
{
int limit = 1024;
int sum = 0;

for (int number = 1; number < limit; number++)
{
if (number % 3 == 0 || number % 5 == 0)
{
sum += number;
}
}
printf("%d\n", sum);
return (0);
}

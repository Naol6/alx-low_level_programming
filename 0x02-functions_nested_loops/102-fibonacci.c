#include <stdio.h>

/**
 * main - print the number with new line
 * Return: type 0
 */
int main(void)
{
long int i, j, k, next;

j = 1;
k = 2;

for (i = 1; i <= 50; ++i)
{
if (i != 50)
{
printf("%ld, ", j);
}
else
{
printf("%ld\n", j);
}
next = j + k;
j = k;
k = next;
}

return (0);
}

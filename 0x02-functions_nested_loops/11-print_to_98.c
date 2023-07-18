#include <stdio.h>
/**
 * print_to_98 - print the natural num
 * @n: print the num
*/

void print_to_98(int n)
{
if (n <= 98)
{
for (int i = n; i <= 98; i++)
{
printf("%d", i);
if (i != 98)
{
printf(", ");
}
}
}
else
{
for (int i = n; i >= 98; i--)
{
printf("%d", i);
if (i != 98)
{
printf(", ");
}
}
}
printf("\n");
}

#include <stdio.h>
#include"main.h"
/**
 * print_last_digit - print last digit
 * @n: the digit
 * Return: return the type
*/

int print_last_digit(int n)
{
int lastDigit = n % 10;
printf("The last digit is %d\n", lastDigit);
return (lastDigit);
}

#include "main.h"

/**
 * rev_string - using pointer
 * @s: type char
 */

void rev_string(char *s)
{
int Max;
int Min;
Min = 0;
Max = 0;
while (*(s + Max) != '\0')
{
Max++;
}
Max--;
while (Min < Max)
{
char temp = *(s + Min);
*(s + Min++) = *(s + Max);
*(s + Max--) = temp;
}
}

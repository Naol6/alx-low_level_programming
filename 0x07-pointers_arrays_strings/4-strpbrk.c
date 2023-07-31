#include "main.h"

/**
 * _strpbrk - main strpbok
 * @s: value
 * @accept: value
 * Return: return type
 */
char *_strpbrk(char *s, char *accept)
{
int k;
while (*s)
{
for (k = 0; accept[k]; k++)
{
if (*s == accept[k])
return (s);
}
s++;
}
return ('\0');
}

#include "main.h"

/**
 * _strlen - length
 * @s: string
 * Return: it's vaue
 */
int _strlen(char *s)
{
int i;
i = 0;
while (s[i] != '\0')
{
i += 1;
}
return (i);
}

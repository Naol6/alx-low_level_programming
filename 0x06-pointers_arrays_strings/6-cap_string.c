#include "main.h"

/**
 * cap_string - all string
 * @str: other string
 * Return: string.
 */
char *cap_string(char *str)
{
int i, j;
char special_chars[] = {' ', '\t', '\n', ',', ';',
'.', '!', '?', '"', '(', ')', '{', '}'};
for (i = 0; str[i] != '\0'; i++)
{
if (i == 0 && str[i] >= 'a' && str[i] <= 'z')
{
str[i] -= 32;
}
for (j = 0; j < sizeof(special_chars); j++)
{
if (str[i] == special_chars[j])
{
if (str[i + 1] >= 'a' && str[i + 1] <= 'z')
{
str[i + 1] -= 32;
}
}
}
}
return (str);
}

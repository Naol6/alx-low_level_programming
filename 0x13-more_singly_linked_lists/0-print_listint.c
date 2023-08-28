#include "lists.h"

/**
 * print_listint - all element of linked list
 * @n: type
 * Return: expected value
*/

size_t print_listint(const listint_t *h)
{
size_t num = 0;
while (h)
{
printf("%d\n", h->n);
num++;
h = h->next;
}
return (num);
}

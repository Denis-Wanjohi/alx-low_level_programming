#include <stdio.h>
#include "lists.h"
/**
 * print_listint(const listint_t *h)
 * typedef listint_t
 * @h:pointer
 * Return-number of items 
*/
size_t print_listint(const listint_t *h)
{
int counter = 0;
while (h != NULL)
{
printf("%d\n", h->n);
h = h->next;
counter++;
}
return counter;
}

#include <stdio.h>
#include "lists.h"
/**
 * listint_len(const listint_t *h)-checks the no of items
 * typedef listint_t
 * @h:pointer
 * Return-number of items
 */
size_t listint_len(const listint_t *h)
{
int counter = 0;
while (h != NULL)
{
h = h->next;
counter++;
}
return (counter);
}

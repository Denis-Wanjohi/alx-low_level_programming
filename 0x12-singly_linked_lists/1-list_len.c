#include "list.h"
#include <stdlib.h>
/**
 * print_list(const list_t *h)-checks the list length
 * typedef list_t
 * @h:pointer
 * return-the length
 */
size_t list_len(const list_t *h) 
{
size_t x = 0;
while (h)
{
x++;
h = h->next;
}
return x;
}

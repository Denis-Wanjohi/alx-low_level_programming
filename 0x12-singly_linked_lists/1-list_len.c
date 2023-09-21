#include "list.h"
/**
 * print_list(const list_t *h)-checks the list length
 * typedef list_t
 * @h:pointer
 * return-the length
 */
size_t list_len(const list_t *h) 
{
size_t x = 0;
const list_t *current = h;
while (current != NULL)
{
x++;
current = current->next;
}
return x;
}

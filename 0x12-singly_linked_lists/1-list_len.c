#include "list.h"
/**
 * print_list(const list_t *h)-checks the list length
 * typedef list_t
 * @h:pointer
 * return-the length
 */
size_t list_len(const list_t *h) 
{
const list_t *current = h;
int x = 0;
while (current != NULL)
{
x++;
current = current->next;
}
return x;
}

#include "list.h"
/**
 * print_list(const list_t *h)-prints the content
 * typedef list_t
 * @h:pointer
 * return- the total no of cotnt
 */

size_t print_list(const list_t *h) 
{
const list_t *current = h;
int x = 0;
while (current != NULL)
{
if ((current->str) == NULL)
{
printf("[0] (nil)\n");
}
else
{
printf("[%d] ", current->len);
printf("%s\n", current->str);        
}
x++;
current = current->next;
}   
return x;
}

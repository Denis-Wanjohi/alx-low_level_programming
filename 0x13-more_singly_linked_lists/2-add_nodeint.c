#include "lists.h"
/**
 * generateNewNode()-creates a new node
 * @n:the node
 * Return-the new created node
*/
listint_t  *generateNewNode(int n)
{
listint_t  *newNode =  (listint_t*)malloc(sizeof(listint_t));
newNode->n = n;
newNode->next = NULL;
return newNode;
}
/**
 * add_nodeint()-pointer function
 * typedef listint_t
 * @head:pointer to struct
 * @n:the vale
 * Return-the address
 * 
*/
listint_t *add_nodeint(listint_t **head, const int n)
{
listint_t *newNode = generateNewNode(n);
if (newNode == NULL)
{
return NULL;
}
newNode->next = *head;
*head = newNode;
return newNode;
}

#include "lists.h"

/**
 * add_nodeint_end - adds a new node at the end of a list
 * @head: a pointer to a pointer to the first element of the list
 * @n: an integer to store in the new node
 *
 * Return: address of the new element, NULL if it failed
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
listint_t *temp, *new;
new = malloc(sizeof(listint_t));
if (new == NULL)
{
return (NULL);
}
new->n = n;
new->next = NULL;
if (*head == NULL)
{
*head = new;
return (new);
}
temp = *head;
while (temp->next != NULL)
{
temp = temp->next;
}
temp->next = new;
return (new);
}

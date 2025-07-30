#include "lists.h"

/**
 * add_dnodeint - Adds a new node at the beginning
 * @head: Pointer to the head of list
 * @n: Integer for the new node
 *
 * Return: NULL if fail else address of the new node
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new;

	new = malloc(sizeof(dlistint_t));
	if(new == NULL)
		return (NULL);

	new->n = n;
	new->prev = NULL;
	new->next = *head;
	if (*head != NULL)
		(*head)->prev = new;
	*head = new;

	return (new);
}

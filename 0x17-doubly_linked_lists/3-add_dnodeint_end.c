#include "lists.h"

/**
 * add_dnodeint_end - add a node in the end of linked list.
 * @n: Value at the node
 * @head: head ptr
 *
 * Return: The address of node.
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new_node;
    dlistint_t *last_node;

    if (head == NULL)
        return (NULL);

    new_node = malloc(sizeof(dlistint_t));
    if (new_node == NULL)
        return (NULL);

    new_node->n = n;
    new_node->next = NULL;

    if (*head == NULL) {
        // If the list is empty, the new node becomes the head
        new_node->prev = NULL;
        *head = new_node;
    } else {
        // Traverse to the last node
        last_node = *head;
        while (last_node->next != NULL) {
            last_node = last_node->next;
        }

        // Link the new node to the last node
        last_node->next = new_node;
        new_node->prev = last_node;
    }

    return (new_node);
}

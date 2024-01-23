#include "sort.h"
/**
 * cocktail_sort_list - Sorts a doubly linked list of integers
 * in ascending order
 *using the Cocktail Shaker Sort algorithm.
 * @list: Pointer to the head of the doubly linked list.
 *
 * Return: Nothing.
 */
void cocktail_sort_list(listint_t **list)
{
	listint_t *current;
	listint_t *beginning = NULL;
	listint_t *end = NULL;

	if (!list || !(*list) || (*list)->next == NULL)
	{
		return;
	}

	current = *list;
	do {
		while (current->next)
		{
			if (current->n > current->next->n)
			{
				interchange_list_nodes(current->next, current, list);
			}
			else
			{
				current = current->next;
			}
		}
		end = current;
		while (current->prev != beginning)
		{
			if (current->n < current->prev->n)
			{
				interchange_list_nodes(current, current->prev, list);
			}
			else
			{
				current = current->prev;
			}
		}
		beginning = current;
	} while (beginning != end);
}

/**
 * interchange_list_nodes - Swaps two nodes in a doubly linked list.
 * @first_node: First node to be swapped.
 * @second_node: Second node to be swapped.
 * @head: Pointer to a pointer to the head of the list.
 */
void interchange_nodes(listint_t *first_node, listint_t *second_node,
		listint_t **head)
{
	listint_t *first_next = first_node->next;
	listint_t *second_prev = second_node->prev;

	if (first_next != NULL)
	{
		first_next->prev = second_node;
	}

	if (second_prev != NULL)
	{
		second_prev->next = first_node;
	}

	first_node->prev = second_prev;
	second_node->next = first_next;
	first_node->next = second_node;
	second_node->prev = first_node;

	if (*head == second_node)
	{
		*head = first_node;
	}
	print_list(*head);
}

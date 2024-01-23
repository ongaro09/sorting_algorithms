#include "sort.h"

/**
 *swap_nodes - Swaps two adjacent nodes in a doubly linked list
 *@list: Double pointer to the head of the list
 *@node1: Pointer to the first node
 *@node2: Pointer to the second node
 *
 *Description: Swaps node1 and node2, where node1 is directly before node2.
 *Adjusts pointers of neighboring nodes.
 */
void swap_nodes(listint_t **list, listint_t *node1, listint_t *node2)
{
	if (node1->prev)
		node1->prev->next = node2;
	if (node2->next)
		node2->next->prev = node1;

	node1->next = node2->next;
	node2->prev = node1->prev;

	node2->next = node1;
	node1->prev = node2;

	if (node2->prev == NULL)
		*
		list = node2;
	else
		node2->prev->next = node2;
}

/**
 *insertion_sort_list - Sorts a doubly linked list
 *using the Insertion sort algorithm
 *@list: Double pointer to the head of the list
 *
 *Description: Iterates through the list
 *Utilizes swap_nodes to swap elements.
 */
void insertion_sort_list(listint_t **list)
{
	listint_t *current, *temp;

	if (!list || !(*list))
		return;

	current = (*list)->next;
	while (current != NULL)
	{
		temp = current;
		while (temp->prev && temp->n < temp->prev->n)
		{
			swap_nodes(list, temp->prev, temp);
			print_list(*list);
			temp = temp->prev;
		}

		current = current->next;
	}
}

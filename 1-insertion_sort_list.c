#include "sort.h"

/**
 *swap_nodes - Swaps two adjacent nodes in a doubly linked list
 *@list: Double pointer to the head of the list
 *@left: Pointer to the first node
 *@right: Pointer to the second node
 *
 *Description: Swaps left and right nodes, adjusting
 *their links appropriately.
 *Ensures that the head of the list is updated correctly.
 */
void swap_nodes(listint_t **list, listint_t *left, listint_t *right)
{
	if (left->prev)
		left->prev->next = right;
	if (right->next)
		right->next->prev = left;

	left->next = right->next;
	right->prev = left->prev;

	right->next = left;
	left->prev = right;

	if (right->prev == NULL)
		*list = right;
}

/**
 *insertion_sort_list - Sorts a doubly linked list
 *of integers in ascending order
 *using the Insertion sort algorithm
 *@list: Double pointer to the head of the list
 *
 *Description: Iterates through the list and
 *Utilizes swap_nodes for swapping adjacent nodes.
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



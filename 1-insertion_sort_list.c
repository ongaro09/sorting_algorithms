#include "sort.h"

/**
 *swap_nodes - Swaps two adjacent nodes in a doubly linked list
 *@list: Double pointer to the head of the list
 *@left: Pointer to the first node
 *@right: Pointer to the second node
 */
void swap_nodes(listint_t **list, listint_t *left, listint_t *right)
{
	if (left->prev)
		left->prev->next = right;
	right->prev = left->prev;

	left->prev = right;
	left->next = right->next;
	if (right->next)
		right->next->prev = left;
	right->next = left;

	if (right->prev == NULL)
		*
		list = right;
}

/**
 *insertion_sort_list - Sorts a doubly linked list
 *using the Insertion sort algorithm
 *@list: Double pointer to the head of the list
 */
void insertion_sort_list(listint_t **list)
{
	listint_t *current, *temp;

	if (!list || !(*list))
		return;

	current = (*list)->next;
	while (current)
	{
		temp = current;
		current = current->next;
		while (temp->prev && temp->n < temp->prev->n)
		{
			swap_nodes(list, temp->prev, temp);
			print_list(*list);
		}
	}
}


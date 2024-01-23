#include "sort.h"
/**
 * cocktail_sort_list - Sorts a doubly linked list of integers in ascending order
 *                      using the Cocktail Shaker Sort algorithm.
 * @list: Pointer to the head of the doubly linked list.
 */
void cocktail_sort_list(listint_t **list)
{
	int swapped;
	listint_t *temp;

	if (list == NULL || *list == NULL)
		return;

	do {
		swapped = 0;

		for (temp = *list; temp->next != NULL; temp = temp->next)
			if (temp->n > temp->next->n&&
			((temp->prev != NULL && (temp->prev->next = temp->next)) ||
				(*list = temp->next)
			) && (
				(temp->next->prev = temp->prev) ||
				(temp->next = temp->next->next)
			) && (
				(temp->prev = temp->next) ||
				(temp->next->prev = temp)
			) && (swapped = 1, print_array(*list)));

		if (!swapped)
			break;

		swapped = 0;

		for (; temp->prev != NULL; temp = temp->prev)
			if (temp->n < temp->prev->n && (
				(temp->next != NULL && (temp->next->prev = temp->prev)) ||
				(temp->prev->next = NULL)
			) && (
				(temp->prev->next = temp->next) ||
				(temp->next = temp->prev)
			) && (
				(temp->prev = temp->prev->prev) ||
				(temp->prev->next = temp)
			) && (swapped = 1, print_array(*list)));

	} while (swapped);
}

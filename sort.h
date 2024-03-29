#ifndef SORT_ALGORITHMS_H
#define SORT_ALGORITHMS_H


#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <sys/types.h>

/**
 *struct listint_s - Doubly linked list node
 *
 *@n: Integer stored in the node
 *@prev: Pointer to the previous element of the list
 *@next: Pointer to the next element of the list
 */
typedef struct listint_s
{
	const int n;
	struct listint_s *prev;
	struct listint_s *next;
} listint_t;

void print_list(const listint_t *list);
void print_array(const int *array, size_t size);

void bubble_sort(int *array, size_t size);
void insertion_sort_list(listint_t **list);
void swap_nodes(listint_t **list, listint_t *left, listint_t *right);
void selection_sort(int *array, size_t size);
void quick_sort(int *array, size_t size);
void quicksort(int *array, size_t size, int low, int high);
void shell_sort(int *array, size_t size);
void cocktail_sort_list(listint_t **list);
void swap_nodes(listint_t **head, listint_t *a, listint_t *b);

#endif


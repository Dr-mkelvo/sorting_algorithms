#ifndef  SORT_H
#define SORT_H

#include <stdlib.h>
#include <stdio.h>

/**
 * Prototypes for my sort header file
 * @next: Pointer to the next element in a list
 * @num: int which is stored inside a node
 * @prev: A pointer to the previous element in a list
*/

typedef struct listint_s
{
	const int n;
	struct listint_s *prev;
	struct listint_s *next;
} listint_t;

/**The prototypes*/
void print_array(const int *array, size_t size);
void print_list(const listint_t *list);
void bubble_sort(int *array, size_t size);
void insertion_sort_list(listint_t **list);
void selection_sort(int *array, size_t size);
void quick_sort(int *array, size_t size);
void shell_sort(int *array, size_t size);
void cocktail_sort_list(listint_t**list);
void counting_sort(int *array, size_t size);
void merge_sort(int *array, size_t size);
void heap_sort(int *array, size_t size);
void radix_sort(int *array, size_t size);
void bitonic_sort(int *array, size_t size);
void quick_sort_hoare(int *array, size_t size);

#endif /* SORT_H */
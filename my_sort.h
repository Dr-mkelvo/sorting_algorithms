#ifndef  MY_SORT_H
#define MY_SORT_H

#include <stdlib.h>
#include <stdio.h>

/**
 * Prototypes for my sort header file
 * @next: Pointer to the next element in a list
 * @num: int which is stored inside a node
 * @prev: A pointer to tp the previous element in a list
*/

typedef struct int_list
{
    const int num;
    struct int_list *prev;
    struct int_list * next;
} list_int;

/**The prototypes*/
void print_array(const int *array, size_t size);
void print_list(const list_int *list);
void bubble_sort(int *array, size_t size);
void insertion_sort_list(list_int **list);
void selection_sort(int *array, size_t size);
void quick_sort(int *array, size_t size);
void shell_sort(int *array, size_t size);
void cocktail_sort_list(list_int **list);
void counting_sort(int *array, size_t size);
void merge_sort(int *array, size_t size);
void heap_sort(int *array, size_t size);
void radix_sort(int *array, size_t size);
void bitonic_sort(int *array, size_t size);
void quick_sort_hoare(int *array, size_t size);

#endif /* MY_SORT_H */
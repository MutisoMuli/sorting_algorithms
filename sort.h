#ifndef SORT_H
#define SORT_H

#include <stdio.h>
#include <stdlib.h>

/* Macros defining the direction of comparisons for bitonic sort */
#define UP 0
#define DOWN 1

/**
 * enum Bool - Enumeration representing Boolean values.
 * @False: Represents the value 0.
 * @True: Represents the value 1.
 */
typedef enum bool
{
	false = 0,
	true
} bool;

/**
 * struct listint_s - Doubly linked list node
 *
 * @n: Integer stored in the node
 * @prev: Pointer to the previous element of the list
 * @next: Pointer to the next element of the list
 */
typedef struct listint_s
{
    const int n;
    struct listint_s *prev;
    struct listint_s *next;
} listint_t;

/* prototypes for 0-bubble_sort.c */
void swap_ints(int *a, int *b);
void bubble_sort(int *array, size_t size);

/* prototypes for print_array.c */
void print_array(const int *array, size_t size);

/* prototypes for print_list.c */
void print_list(const listint_t *list);

/* prototypes for 1-insertion_sort_list.c */
void insertion_sort_list(listint_t **list);
void exchange_nodes(listint_t **h, listint_t **n1, listint_t *n2);

/* prototypes for 2-selection_sort.c */
void selection_sort(int *array, size_t size);
#endif /* SORT_H */

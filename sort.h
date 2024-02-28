#ifndef SORT_H
#define SORT_H
#define _GNU_SOURCE

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

typedef struct listint_s
{
	const int n;
	struct listint_s *prev;
	struct listint_s *next;
} listint_t;

void bubble_sort(int *array, size_t size);
void print_array(const int *array, size_t size);
void print_list(const listint_t *list);
void insertion_sort_list(listint_t **list);

#endif

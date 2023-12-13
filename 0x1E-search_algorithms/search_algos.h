#ifndef _SEARCH_ALGOS_H
#define _SEARCH_ALGOS_H
#include <stdio.h>
#include <stddef.h>
int linear_search(int *array, size_t size, int value);
int binary_search(int *array, size_t size, int value);
void print_array(int *array, int start, int size);
#endif

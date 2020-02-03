#include "sort.h"

/**
 * insertion_sort_list - sorts list with insertion sort
 * @list: input list to sort
 */
void insertion_sort_list(listint_t **list)
{
	listint_t *temp, *prev_n, *next_n;

	if (list && *list && (*list)->next)
	{
		temp = (*list)->next;
		prev_n = temp->prev;
		next_n = temp->next;

		while (temp)
		{
			if (temp->n < prev_n->n)
			{
				swap_list(prev_n, temp, next_n, list);
			}
			temp = next_n;
			if (temp)
			{
				next_n = temp->next;
				prev_n = temp->prev;
			}
		}
	}
}

/**
 * swap_list - swaps the position of two nodes in a linked list
 * @prev_n: previous node
 * @temp: temp
 * @next_n: next node
 * @h: head of list
 */
void swap_list(listint_t *prev_n, listint_t *temp, listint_t *next_n, listint_t **h)
{

	while (prev_n && temp->n < prev_n->n)
	{
		if (next_n)
			next_n->prev = prev_n;
		temp->next = prev_n;
		temp->prev = prev_n->prev;
		if (prev_n->prev)
			(prev_n->prev)->next = temp;
		prev_n->prev = temp;
		prev_n->next = next_n;
		next_n = prev_n;
		prev_n = temp->prev;
		if ((*h)->prev)
			*h = (*h)->prev;
		print_list(*h);
	}
}

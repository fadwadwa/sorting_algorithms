#include "sort.h"
/**
 * insertion_sort_list - sorts a doubly linked list of integers
 * in ascending order using the Insertion sort algorithm
 * @list: a pointer to the list to be sorted
 * Return: void
 */

void insertion_sort_list(listint_t **list)
{
	listint_t *i, *j, *tmp;

	if (!list || !*list)
		return;
	i = (*list)->next;
	while (i)
	{
		j = i;
		i = i->next;
		while (j && j->prev && j->prev->n > j->n)
		{
			tmp = j->prev;
			tmp->next = j->next;
			if (j->next)
				j->next->prev = tmp;
			j->next = tmp;
			j->prev = tmp->prev;
			if (tmp->prev)
				tmp->prev->next = j;
			else
				*list = j;
			tmp->prev = j;
			print_list(*list);
		}
	}
}

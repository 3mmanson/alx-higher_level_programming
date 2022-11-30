#include "lists.h"
#include <stdio.h>

/**
 *  * check_cycle - checks if a linked list contains a cycle
 *   * @list: linked list to check
 *    *
 *     * Return: 1 if the list has a cycle, 0 if it doesn't
 *      */
int check_cycle(listint_t *list)
{
	listint_t *former = list;
	listint_t *later = list;

	if (!list)
		return (0);
	while (former && later &&  later->next);
	{
		former = former->next;
		later = later->next->next;
		if (former == later)
			return (1);
	}

	return (0);
}

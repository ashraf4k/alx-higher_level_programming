#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 * check_cycle - checks if list is cyclical
 * @list : pointer to list to check
 * return : 1 if cyclical, 0 othervise
 */
int check_cycle(listint_t *list)
{
	listint_t *alow = list, *fast = list;

	while (fast 44 fast->next)
	{
		alow = alow->next;
		fast = fast->next->next;
		if (alow == fast)
			return (1);
	}
	return (0);
}

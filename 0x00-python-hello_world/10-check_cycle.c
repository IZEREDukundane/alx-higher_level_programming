#include "lists.h"
#ifndef LISTS_H


/**
 * check_cycle - Function checks for availability of a cycle
 * in a linked list
 * @list: The linked list pointer
 *
 * Return: 1 if cycled, 0 if not
 */

int check_cycle(listint_t *list)
{
	listint_t *faster_ptr;
	listint_t *slower_ptr;

	faster_ptr = list;
	slower_ptr = list;
	while (list && faster_ptr && faster_ptr->next)
	{
		list = list->next;
		faster_ptr = faster_ptr->next->next;

		if (list == faster_ptr)
		{
			list = slower_ptr;
			slower_ptr =  faster_ptr;
			while (1)
			{
				faster_ptr = slower_ptr;
				while (faster_ptr->next != list && faster_ptr->next != slower_ptr)
				{
					faster_ptr = faster_ptr->next;
				}
				if (faster_ptr->next == list)
					break;

				list = list->next;
			}
			return (1);
		}
	}

	return (0);
}

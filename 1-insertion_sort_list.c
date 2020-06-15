#include "sort.h"

/**
*insertion_sort_list - sort array with insertion method
*@list: list to sort
*Return: void
*/

void insertion_sort_list(listint_t **list)
{
	listint_t *aux, *newlist, *stmpp = NULL;

	if (list == NULL || *list == NULL || (*list)->next == NULL)
		return;
	newlist = *list;
	while (newlist)
	{
		aux = newlist->prev;
		while (aux)
		{
			if (newlist->n < aux->n)
			{
				if (newlist->next)
					newlist->next->prev = aux;
				aux->next = newlist->next;
				stmpp = aux->prev;
				aux->prev = newlist;
				newlist->next = aux;
				newlist->prev = stmpp;
				if (stmpp)
					stmpp->next = newlist;
				else
					*list = newlist;
				aux = aux->prev;
			}
			else
				break;
			print_list(*list);
			aux = aux->prev;
		}

		newlist = newlist->next;
	}
}

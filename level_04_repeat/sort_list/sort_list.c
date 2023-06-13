/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_list.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abastida <abastida@student.42barcelona.co  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/12 17:59:23 by abastida          #+#    #+#             */
/*   Updated: 2023/06/12 18:11:07 by abastida         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include "list.h"
#include <stdlib.h>

t_list	*sort_list(t_list* lst, int (*cmp)(int, int))
{
	t_list *node = lst;
	int aux;
	while (lst->next)
	{
		if (cmp(lst->data, lst->next->data) == 0)
		{
			aux = lst->data;
			lst->data = lst->next->data;
			lst->next->data = aux;
			lst = node;
		}
		else
			lst = lst->next;
	}
	lst = node;
	return (lst);
}


// return = 0 si no esta ordenado;
// return != 0 si esta ordenado;
int ascending(int a, int b)
{
	return (a <= b);
}

t_list *create_node()
{
	t_list *new;

	new = malloc(sizeof(t_list));
	if (!new)
		return (NULL);
	new->next = NULL;
	return (new);
}

int main()
{
	t_list *node1 = create_node();
	t_list *node2 = create_node();
	t_list *node3 = create_node();

	node1->next = node2;
	node2->next = node3;

	node1->data = 5;
	node2->data = 3;
	node3->data = 7;

	t_list *res = sort_list(node1, ascending);
	while(res)
	{
		printf("%d", res->data);
		res = res->next;
	}
	return (0);
}

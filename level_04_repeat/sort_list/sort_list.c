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

t_list	*sort_list(t_list* lst, int (*cmp)(int, int))
{
	t_list *node = lst;
	int aux;
	while (node->next)
	{
		if (cmp(node->data, node->next->data) == 0)
		{
			aux = node->data;
			node->data = node->next->data;
			node->next->data = aux;
			node = lst;
		}
		else
			node = node->next;
	}
	node = lst;
	return (node);
}


// return = 0 si no esta ordenado;
// return != 0 si esta ordenado;
int ascending(int a, int b)
{
	return (a <= b);
}

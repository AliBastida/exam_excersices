/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   list_for_each.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abastida <abastida@student.42barcelona.co  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/12 16:22:11 by abastida          #+#    #+#             */
/*   Updated: 2023/06/12 16:54:07 by abastida         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>
#include "ft_list.h"

void    ft_list_foreach(t_list *begin_list, void (*f)(void *))
{
	t_list *node = begin_list;
	while (node)
	{
		(*f)(node->data);
		node = node->next;
	}
}


t_list *create_node()
{
	t_list *node;
	node = malloc(sizeof(t_list));
	if (!node)
		return(NULL);
	node->next = NULL;
	return (node);
}

void print_list(void *s)
{
	printf("%s\n", (char *)s);
}
int main()
{
	t_list *node1 = create_node();
	t_list *node2 = create_node();
	t_list *node3 = create_node();

	node1->data = "42";
	node2->data = "Barcelona";
	node3->data = "rules";

	node1->next = node2;
	node2->next = node3;
	node3->next = NULL;

	ft_list_foreach(node1, print_list);
	return(0);
}




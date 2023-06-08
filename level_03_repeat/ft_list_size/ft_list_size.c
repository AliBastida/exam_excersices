/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_size.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abastida <abastida@student.42barcelona.co  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/07 17:23:12 by abastida          #+#    #+#             */
/*   Updated: 2023/06/07 17:58:09 by abastida         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"
#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

int	ft_list_size(t_list *begin_list)
{
	int i = 0;
	while (begin_list)
	{
		begin_list = begin_list -> next;
		i++;
	}
	return (i);
}

t_list *new_node()
{
	t_list *new;
	new = malloc(sizeof(t_list));
	new->next = NULL;
	return (new);
}

int main()
{
	t_list *node1;
	t_list *node2;
	t_list *node3;
	
	node1 = new_node();
	node2 = new_node();
	node3 = new_node();

	node1->next = node2;
	node2->next = node3;
	printf("%d", ft_list_size(node1));
	return (0);
}

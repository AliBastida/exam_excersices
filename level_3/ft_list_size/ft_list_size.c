/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_size.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abastida <abastida@student.42barcelona.co  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/11 18:58:28 by abastida          #+#    #+#             */
/*   Updated: 2023/05/11 19:03:48 by abastida         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"
#include <unistd.h>
#include <stdio.h>

int ft_list_size(t_list *begin_list)
{
	int i = 0;
	while(begin_list != NULL)
	{
		node = node->next;
		i++;
	}
	return(i);
}

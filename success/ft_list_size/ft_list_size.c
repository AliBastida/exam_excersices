/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_size.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abastida <abastida@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/07 12:28:26 by abastida          #+#    #+#             */
/*   Updated: 2023/02/07 12:28:26 by abastida         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>

typedef struct	s_list
{
	struct s_list *next;
	void	*data;
} t_list;

t_list  *ft_new_node()
{
    t_list  *nodo;

    nodo = malloc(sizeof(t_list));
    nodo->next = NULL;

    return (nodo);
}
int	ft_list_size(t_list *begin_list)
{
	int i = 0;
	t_list *temp;

	temp = begin_list;
	while(temp != NULL)
	{
		temp = temp->next;
		i++;
	}
	return(i);
}

int	main()
{
	t_list *nodo1;
//	t_list *nodo2;
//	t_list *nodo3;

	nodo1 = ft_new_node();
//	nodo2 = ft_new_node(); 
//	nodo3 = ft_new_node();

//	nodo1->next = nodo2;
//	nodo2->next = nodo3;
	
	printf("El numero de nodos es: %d\n ", ft_list_size(NULL));

}

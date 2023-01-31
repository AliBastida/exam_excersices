/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abastida <abastida@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/31 11:05:53 by abastida          #+#    #+#             */
/*   Updated: 2023/01/31 11:05:53 by abastida         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <unistd.h>

void	ft_swap(int *a, int *b)
{
	int tmp = 0;

		tmp = *a;
		*a = *b;
		*b = tmp;
}

/*int main()
{
	int a = 289;
	int b = 174;

	ft_swap(&a, &b);
	printf("a%d || b%d\n", a, b);
	return(0);
}
*/

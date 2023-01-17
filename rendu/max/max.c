/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   max.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abastida <abastida@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/17 15:15:27 by abastida          #+#    #+#             */
/*   Updated: 2023/01/17 19:33:27 by abastida         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int	max(int *tab, unsigned int len)
{
	int i;
	int tmp;

	i = 0;
	tmp = tab[0];
	while(i < (int)len)
	{
		if(tmp < tab[i])
		{
			tmp = tab[i];
		}
		i++;
	}
	return(tmp);
}

int	main(void)
{
	int temp;
	int	numbers[12] = {1, 4, 2, 5, 8, 15, 300, 22, 1432, 3, 8333333, 34};
	
	temp = max(numbers, 12);
	printf("%d\n", temp);
	return(0);
}

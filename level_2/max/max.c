/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   max.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abastida <abastida@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/08 13:56:04 by abastida          #+#    #+#             */
/*   Updated: 2023/05/08 13:56:04 by abastida         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>


int max(int *tab, unsigned int len)
{
	unsigned int i = 1;
	int tmp = tab[0];
	if (!tab || len == 0)
		return (0);
	while(len > 0)
	{
		if(tmp < tab[i])
			tmp = tab[i];
		i++;
		len--;
	}
	return(tmp);
}

int main()
{
	int number[5] = {7, 42, 0, -5};
	printf("%d\n", max(number, 4));
	return(0);
}

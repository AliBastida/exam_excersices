/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   max.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abastida <abastida@student.42barcelona.co  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/05 16:07:27 by abastida          #+#    #+#             */
/*   Updated: 2023/06/05 16:15:36 by abastida         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int max(int *tab, unsigned int len)
{
	unsigned int n = 1;
	int max = tab[0];

	while (len >= n)
	{
		if (max < tab[n])
			max = tab[n];
		else 
			n++;
	}
	return (max);
}

int main()
{
	int tab[7] = {7,3,8,10,4,9,5};
	printf("%d", max(tab, 7));
	return (0);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_in_tab.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abastida <abastida@student.42barcelona.co  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/14 12:36:42 by abastida          #+#    #+#             */
/*   Updated: 2023/05/14 13:18:42 by abastida         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

void sort_in_tab(int *tab, unsigned int size)
{
	unsigned int i = 0;
	int tmp = 0;
	while (size -1 > i)
	{
		if(tab[i] > tab[i + 1])
		{
			tmp = tab[i];
			tab[i] = tab[i + 1];
			tab[i + 1] = tmp;
			i = 0;
		}
		else
			i++;
		printf("%d ", tab[i]);
	}
}

int main(void)
{
	int num[6] = {1, 6, 5, 7, 9, 8};
	sort_in_tab(num, 6);
	return(0);
}

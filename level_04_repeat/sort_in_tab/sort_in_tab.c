/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_in_tab.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abastida <abastida@student.42barcelona.co  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/12 17:07:30 by abastida          #+#    #+#             */
/*   Updated: 2023/06/12 17:35:35 by abastida         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <stdio.h>

void sort_int_tab(int *tab, unsigned int size)
{
	int aux;
	unsigned int i = 0;
	while (size-1 > i)
	{
		if (tab[i] > tab[i + 1])
		{
			aux = tab[i];
			tab[i] = tab[i + 1];
			tab[i + 1] = aux;
			i = 0;
		}
		else
			i++;
	}
}
int main()
{
	int i = 0;
	int tab[5] = {4, -4, 9, 7, 2};
	sort_int_tab(tab, 5);
	while (5 > i)
	{
		printf("%d ", tab[i++]);
	}
}

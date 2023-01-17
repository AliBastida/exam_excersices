/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   max.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abastida <abastida@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/17 15:15:27 by abastida          #+#    #+#             */
/*   Updated: 2023/01/17 15:21:55 by abastida         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	max(int *tab, unsigned int len)
{
	int i;
	int tmp;

	i = 0;
	tmp = tab[0];
	while(tab[i])
	{
		if(tmp < tab[i])
			tmp = tab[i];
		i++;
	}

	if(len == 0)
		return(tmp);
}

int	main(void)
{


}

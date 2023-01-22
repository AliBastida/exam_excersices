/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   max.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abastida <abastida@student.42barcelona.co  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/18 17:24:19 by abastida          #+#    #+#             */
/*   Updated: 2023/01/18 17:42:44 by abastida         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int	max(int *tab, unsigned int len)
{
	int tmp = tab[0];
	unsigned int i = 0;

	while(i < len)
	{
		if(tmp < tab[i])
			tmp = tab[i];
		i++;
	}
	return(tmp);
}

/*int	main(void)
{
	int tab[6] = {3,42,5,1,9,15};
	int result;
	result = max(tab, 6);
	printf("Num max:%d\n", result);
	return (0);
}*/

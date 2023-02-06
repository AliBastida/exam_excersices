/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   hidenp.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abastida <abastida@student.42barcelona.co  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/06 17:33:00 by abastida          #+#    #+#             */
/*   Updated: 2023/02/06 19:35:38 by abastida         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	hidenp(char *s1, char *s2)
{
	int i = 0;
	int j = 0;
	while(s2[j] && s1[i])
	{
		if(s1[i] == s2[j])
		{
			i++;
		//	write(1, &s2[j], 1);
		}
		j++;
	}
	if(s1[i] == '\0')
		write(1, "1", 1);
	else
		write(1, "0", 1);
}


int	main(int ac, char **av)
{
	if(ac == 3)
	{
		if(av)
			hidenp(av[1], av[2]);
	}
	write(1, "\n", 1);
	return(0);
}

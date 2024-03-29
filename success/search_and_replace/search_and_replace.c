/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   search_and_replace.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abastida <abastida@student.42barcelona.co  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/06 09:15:21 by abastida          #+#    #+#             */
/*   Updated: 2023/02/06 09:50:36 by abastida         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

void	search_and_replace(char *str, char a, char b)
{
	int i = 0;
	while(str[i])
	{
		if(str[i] == a)
			str[i] = b;
		write(1,&str[i], 1);
		i++;
	}
}

int	main(int ac, char **av)
{
	if(ac == 4)
	{
		if(av[1] && !av[2][1] && !av[3][1])
			search_and_replace(av[1],av[2][0],av[3][0]);
	}
	write(1, "\n", 1);
	return(0);
}

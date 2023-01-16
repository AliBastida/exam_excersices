/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   repeat_alpha.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abastida <abastida@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/12 11:10:44 by abastida          #+#    #+#             */
/*   Updated: 2023/01/12 12:08:09 by abastida         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	repeat_alpha(char *str)
{
	int i;
	int n_times;

	i = 0;
	while(str[i])
	{
		n_times = 0;
		if (str[i] >= 65 && str[i] <= 90)
		{
			n_times = str[i] - 65;
			while(n_times >= 0)
			{
				write (1, &str[i], 1);
				n_times--;
			}
			
		}
		else if (str[i] >= 97 && str[i] <= 122)
		{	
			n_times = str[i] - 97;
			while(n_times >= 0)
			{
				write (1, &str[i], 1);
				n_times--;
			}
		}
		else
			write(1, &str[i], 1);
		i++;
	}
}

int	main(int ac, char **av)
{
	if (ac == 2)
	{
		repeat_alpha(av[1]);
	}
	write(1, "\n",1);

	return(0);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   snake_to_camel.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abastida <abastida@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/16 13:20:32 by abastida          #+#    #+#             */
/*   Updated: 2023/01/16 15:09:04 by abastida         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int ac, char **av)
{
	int i;

	i = 0;
	if(ac == 2)
	{
		while(av[1][i])
		{
			if(av[1][i] == '_')
			{
				i++;
				av[1][i] = av[1][i] - 32;
			}
			write(1, &av[1][i], 1);
			i++;
		}
	}
	write(1,"\n", 1);
	return(0);
}

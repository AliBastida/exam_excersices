/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   camel_to_snake.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abastida <abastida@student.42barcelona.co  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/06 10:06:00 by abastida          #+#    #+#             */
/*   Updated: 2023/02/06 10:49:16 by abastida         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

void	camel_to_snake(char *str)
{
	int i = 0;
	while(str[i])
	{
		if(str[i] >= 65 && str[i] <= 90)
		{
			str[i] = str[i] + 32;
			write(1, "_", 1);
		}
		write(1, &str[i], 1);
		i++;
	}
}


int	main(int ac, char **av)
{
	if(ac == 2)
	{
		if(av)
			camel_to_snake(av[1]);
	}
	write(1, "\n", 1);
	return(0);
}


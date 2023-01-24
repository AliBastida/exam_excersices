/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rev_print.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abastida <abastida@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/24 12:31:23 by abastida          #+#    #+#             */
/*   Updated: 2023/01/24 12:31:23 by abastida         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	rev_print(char *str)
{
	int i = 0;

	while(str[i])
	{
		i++;
	}
	while(i > 0)
	{
		i--;
		write(1, &str[i], 1);
	}

}

int	main(int ac, char **av)
{
	if(ac == 2)
	{
		rev_print(av[1]);
	}
	write(1, "\n", 1);
	return(0);

}

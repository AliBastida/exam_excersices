/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   snake_to_camel.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abastida <abastida@student.42barcelona.co  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/09 09:48:30 by abastida          #+#    #+#             */
/*   Updated: 2023/05/09 10:12:54 by abastida         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void snake_to_camel(char *str)
{
	int i = 0;
	while (str[i])
	{
		if (str[i] == '_')
		{
			i++;
			str[i] = (str[i]) - 32;
		}
		write(1, &str[i], 1);
		i++;
	}
}


int main(int ac, char **av)
{
	if (ac == 2)
		snake_to_camel(av[1]);
	write(1, "\n", 1);
	return (0);
}

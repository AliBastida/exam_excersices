/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   alpha_mirror.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abastida <abastida@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/04 13:12:24 by abastida          #+#    #+#             */
/*   Updated: 2023/05/04 13:12:24 by abastida         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	alpha_mirror(char *str)
{
	int i = 0;
	while (str[i])
	{
		if (str[i]>= 'A' && str[i] <= 'Z')
			//str[i] = 'Z' - str[i] + 'A';
			str[i] = ('Z' + 'A') - str[i];
		else if(str[i] >= 'a' && str[i] <= 'z')
			str[i] = 'z' - str[i] + 'a';
		write(1, &str[i], 1);
		i++;
	}
}

int	main(int ac, char **av)
{
	if (ac == 2)
		alpha_mirror(av[1]);
	write(1, "\n", 1);
	return (0);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   inter.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abastida <abastida@student.42barcelona.co  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/01 08:18:01 by abastida          #+#    #+#             */
/*   Updated: 2023/05/01 10:48:56 by abastida         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	find_char(char c, char *str, int i)
{
	while (i >= 0)
	{
		if (c == str[i])
			return (1);
		i--;
	}
	return (0);
}


void	ft_inter(char *s1, char *s2)
{
	int i = 0;
	int j = 0;

	while(s1[i])
	{
		while (s2[j])
		{
			if (find_char(s1[i], s2, j) == 1)
				write(1, &s1[i], 1);
			j++;
		}
		i++;
	}
}

int	main(int ac, char **av)
{
	if(ac == 3)
		ft_inter(av[1], av[2]);
	write(1, "\n", 1);
	return (0);
}

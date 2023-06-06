/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   inter.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abastida <abastida@student.42barcelona.co  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/31 17:12:30 by abastida          #+#    #+#             */
/*   Updated: 2023/06/01 12:29:10 by abastida         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	look_for_char(char *str, char c, int i)
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
		j = 0;
		while(s2[j])
		{
			if (look_for_char(s1, s1[i], i - 1) == 0 && s2[j] == s1[i])
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


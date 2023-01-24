/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   union.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abastida <abastida@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/24 12:45:32 by abastida          #+#    #+#             */
/*   Updated: 2023/01/24 12:45:32 by abastida         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	find_char(char c, char *s, int i)
{
	while(i >= 0)
	{
		if(s[i] == c)
			return(1);
		i--;
	}
	return(0);
}

void	ft_union(char *s1, char *s2)
{
	int i = 0;
	int j = 0;
	char c;

	while (s1[i])
	{
		c = s1[i];
		if (find_char(c, s1, i - 1) == 0)
			write(1, &c, 1);
		i++;
	}
	while (s2[j])
	{
		c = s2[j];
		if ((find_char(c, s2, j - 1) == 0) && (find_char(c, s1, i - 1) == 0))
			write(1, &c, 1);
		j++;
	}
}

int	main(int ac, char **av)
{
	if(ac == 3)
	{
		if(av)
			ft_union(av[1], av[2]);
	}
	write(1, "\n", 1);
	return(0);
}

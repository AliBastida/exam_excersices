/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   union.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abastida <abastida@student.42barcelona.co  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/09 11:14:17 by abastida          #+#    #+#             */
/*   Updated: 2023/05/09 15:54:04 by abastida         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int	look_for_char(char *str, char c, int len)
{
	while (len >= 0)
	{
		if (str[len] == c)
			return (1);
		len--;
	}
	return (0);
}

void	ft_union(char *s1, char *s2)
{
	int i = 0;
	int j = 0;
	char c;

	while(s1[i])
	{
		c = s1[i];
		if (look_for_char(s1, c, i - 1) == 0)
			write(1, &s1[i], 1);
		i++;
	}
	while(s2[j])
	{
		c = s2[j];
		if ((look_for_char(s1, c, i -1) == 0) && (look_for_char(s2, c, j - 1) == 0))
			write(1, &s2[j], 1);
		j++;
	}
}

int main(int ac, char **av)
{
	if (ac == 3)
		ft_union(av[1], av[2]);
	write(1, "\n", 1);
	return (0);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   wdmatch.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abastida <abastida@student.42barcelona.co  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/05 17:57:45 by abastida          #+#    #+#             */
/*   Updated: 2023/06/05 18:16:15 by abastida         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int ft_strlen(char *s1)
{
	int i = 0;
	while(s1[i])
		i++;
	return (i);
}

void wdmatch(char *s1, char *s2)
{
	int i = 0;
	int j = 0;
	while (s1[i] && s2[j])
	{
		if (s1[i] == s2[j])
			i++;
		j++;
	}
	if (ft_strlen(s1) == i)
	{
		i = 0;
		while (s1[i])
			write(1, &s1[i++], 1);
	}
}


int main(int ac, char **av)
{
	if (ac == 3)
		wdmatch(av[1], av[2]);
	write(1, "\n", 1);
	return (0);
}

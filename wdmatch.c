/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   wdmatch.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abastida <abastida@student.42barcelona.co  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/09 17:37:41 by abastida          #+#    #+#             */
/*   Updated: 2023/05/09 19:46:42 by abastida         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

void ft_putstr(char *str)
{
	int i = 0;
	while(str[i])
		write(1, &str[i++], 1);
}

int ft_strlen(char *str)
{
	int i = 0;
	while(str[i])
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
	if (i == ft_strlen(s1))
		ft_putstr(s1);
}

int main (int ac, char **av)
{
	if (ac == 3)
		wdmatch(av[1], av[2]);
	write(1, "\n", 1);
	return (0);
}

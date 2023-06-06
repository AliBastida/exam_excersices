/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abastida <abastida@student.42barcelona.co  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/30 12:29:50 by abastida          #+#    #+#             */
/*   Updated: 2023/05/30 12:38:39 by abastida         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>
#include <string.h>

int ft_strcmp(char *s1, char *s2)
{
	int i = 0;
	while(s1[i] && s2[i] && s1[i] == s2[i])
		i++;
	return (s1[i] - s2[i]);
}
/*
int main (int ac, char **av)
{
	if (ac == 3)
	//	ft_strcmp(av[1], av[2]);
	{
		printf("mine:%d\n", ft_strcmp(av[1], av[2]));
		printf("theirs:%d\n", strcmp(av[1], av[2]));
	}
	return (0);
}*/

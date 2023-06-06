/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strpbrk.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abastida <abastida@student.42barcelona.co  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/31 11:18:41 by abastida          #+#    #+#             */
/*   Updated: 2023/05/31 11:35:53 by abastida         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

char	*ft_strpbrk(const char *s1, const char *s2)
{
	int j = 0;
	int i = 0;
	while(s1[i])
	{
		j = 0;
		while(s2[j])
		{
			if (s1[i] == s2[j])
				return ((char *)&s1[i]);
			else
				j++;
		}
		i++;
	}	
	return (NULL);
}
/*
int main(int ac, char **av)
{
	if (ac == 3)
	{
		printf("%s\n", strpbrk(av[1], av[2]));
		printf("%s\n", ft_strpbrk(av[1], av[2]));
	}
	return (0);
}*/

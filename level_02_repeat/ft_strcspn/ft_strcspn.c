/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcspn.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abastida <abastida@student.42barcelona.co  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/30 12:40:01 by abastida          #+#    #+#             */
/*   Updated: 2023/05/31 11:03:18 by abastida         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <string.h>

size_t	ft_strcspn(const char *s, const char *reject)
{
	size_t i = 0;
	size_t j = 0;
	while (s[i])
	{
		j=0;
		while (reject[j])
		{
			if (s[i] == reject[j])
				return (i);
			else
				j++;
		}
		i++;
	}
	return (i);
}
/*
int main (int ac, char **av)
{
	if (ac == 3)
	{
		printf("%zu\n", ft_strcspn(av[1], av[2]));
		printf("%zu\n", strcspn(av[1], av[2]));
	}

}*/

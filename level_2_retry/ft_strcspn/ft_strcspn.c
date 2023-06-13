/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcspn.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abastida <abastida@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/13 13:42:23 by abastida          #+#    #+#             */
/*   Updated: 2023/06/13 13:42:23 by abastida         ###   ########.fr       */
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
		j = 0;
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


int main(int ac, char **av)
{
	if (ac == 3)
	{
		printf("%zu\n", ft_strcspn(av[1], av[2]));
		printf("%zu", strcspn(av[1], av[2]));
	}
	write(1, "\n", 1);
	return (0);
}

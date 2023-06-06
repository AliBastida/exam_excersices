/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strspn.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abastida <abastida@student.42barcelona.co  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/31 15:35:06 by abastida          #+#    #+#             */
/*   Updated: 2023/05/31 16:41:59 by abastida         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <string.h>

int	look_for_char(const char *s, char c)
{
	int i = 0;
	while (s[i])
	{
		if (s[i] == c)
			return (c);
		i++;
	}
	return (0);
}

size_t	ft_strspn(const char *s, const char *accept)
{
	size_t i = 0;
	//size_t j = 0;
	while(s[i]) 
	{
		if (look_for_char(accept, s[i]) == 0)
			return (i);
		i++;
	}
	return (i);
}

int main(int ac, char **av)
{
	if (ac == 3)
	{
		printf("%zu\n", ft_strspn(av[1], av[2]));
		printf("%zu\n", strspn(av[1], av[2]));
	}
}

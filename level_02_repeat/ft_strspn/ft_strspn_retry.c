/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strspn_retry.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abastida <abastida@student.42barcelona.co  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/06 09:54:40 by abastida          #+#    #+#             */
/*   Updated: 2023/06/06 10:25:04 by abastida         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <string.h>

int look_for_char(const char *s, char c)
{
	int i = 0;
	while (s[i])
	{
		if (s[i] == c)
			return (1);
		i++;
	}
	return (0);
}

size_t ft_strspn(const char *s, const char *accept)
{
	int i = 0;
	while (s[i])
	{
		if (look_for_char(accept, s[i]) == 0)
			break ;
		i++;
	}
	return (i);
}

int main(int ac, char **av)
{
	if (ac == 3)
	{
		printf("%lu\n", strspn(av[1], av[2]));
		printf("%zu\n", ft_strspn(av[1], av[2]));
	}
	return (0);
}


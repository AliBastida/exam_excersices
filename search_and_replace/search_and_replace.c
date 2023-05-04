/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   search_and_replace.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abastida <abastida@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/04 11:51:28 by abastida          #+#    #+#             */
/*   Updated: 2023/05/04 11:51:28 by abastida         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	search_and_replace(char *str, char *c, char *r)
{
	int i = 0;
	while (str[i] && c[1] == '\0' && r[1] == '\0')
	{
		if (str[i] == c[0])
			str[i] = r[0];
		write(1, &str[i], 1);
		i++;
	}
}


int	main(int ac, char **av)
{
	if (ac == 4)
		search_and_replace(av[1], av[2], av[3]);
	write(1, "\n", 1);
	return(0);
}







/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ulstr.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abastida <abastida@student.42barcelona.co  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/18 16:46:39 by abastida          #+#    #+#             */
/*   Updated: 2023/01/18 17:23:51 by abastida         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ulstr(char *str)
{
	int	i;

	i = 0;
	while(str[i] != '\0')
	{
		if(str[i] >= 97 && str[i] <= 122)
			str[i] = str[i] - 32;
		else if(str[i] >= 65 && str[i] <= 90)
			str[i] = str[i] + 32;
		write(1, &str[i], 1);
		i++;
	}
}

int	main(int ac, char ** av)
{
	if(ac == 2)
	{
		if(av[1])
			ulstr(av[1]);
	}
	write(1, "\n", 1);
	return(0);
}


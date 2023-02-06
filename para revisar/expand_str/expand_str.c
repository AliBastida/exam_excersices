/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   expand_str.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abastida <abastida@student.42barcelona.co  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/06 11:31:45 by abastida          #+#    #+#             */
/*   Updated: 2023/02/06 13:31:58 by abastida         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>


void	expand_str(char *str)
{
	int i = 0;
	while(str[i])
	{
		if((str[i] == ' ' || str[i] == '	') && ((str[i + 1] >= 65 && str[i + 1] <= 90) || (str[i + 1] >= 97 && str[i + 1] <= 123)))
			write(1, "   ", 3);
		else if((str[i] >= 65 && str[i] <= 90) || (str[i] >= 97 && str[i] <= 123))
		write(1, &str[i], 1);
		i++;
	}
}

int	main(int ac, char **av)
{
	if(ac == 2)
	{
		if(av[1])
			expand_str(av[1]);
	}
	write(1, "\n", 1);
	return(0);
}

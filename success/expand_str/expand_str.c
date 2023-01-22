/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   expand_str.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abastida <abastida@student.42barcelona.co  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/18 18:36:02 by abastida          #+#    #+#             */
/*   Updated: 2023/01/18 21:32:06 by abastida         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void expand_str(char *str)
{
	int i = 0;
	while(str[i])
	{
		if((str[i] == ' ') || (str[i] == '	'))
			i++;			
		write(1, &str[i], 1);
		if((str[i + 1] == ' ') || (str[i + 1] == '	'))
			write(1, "   ", 3);
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

}

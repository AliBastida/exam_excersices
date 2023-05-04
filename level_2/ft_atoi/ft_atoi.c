/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abastida <abastida@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/04 15:35:39 by abastida          #+#    #+#             */
/*   Updated: 2023/05/04 15:35:39 by abastida         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

/*
 1.gestionar espacios
 2.gestionar negativos
 3.gestionar los chars (putnumber)
*/

int	ft_atoi(char *str)
{
	int i = 0;
	int sign = 1;
	int num = 0;
	while ((str[i] == ' ') || (str[i] >= 9 && str[i] <= 13))
		i++;
	if (str[i] == '-')
		sign = -1;
	if (str[i] == '-' || str[i] == '+')
		i++;
	while(str[i] >= '0' && str[i] <= '9')
	{
		num = (num * 10) + (str[i] - '0');
		i++;
	}
	return (num * sign);
}



int	main(int ac, char **av)
{
	if (ac == 2)
	{
		printf("mi atoi:%d\n",ft_atoi(av[1]));
		printf("theirs:%d\n",atoi(av[1]));
	}
	//write(1, "\n", 1);
	return (0);
}

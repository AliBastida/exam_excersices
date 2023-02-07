/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abastida <abastida@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/07 11:29:44 by abastida          #+#    #+#             */
/*   Updated: 2023/02/07 11:29:44 by abastida         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

int	ft_atoi(const char *str)
{
	int neg = 1;
	int num = 0;
	while(*str == 32 || (*str >= 9 && *str <= 13))
		str++;
	if(*str == '-')
		neg = neg * -1;
	if(*str == '-' || *str == '+')
		str++;
	while(*str >= '0' && *str <= '9')
	{
		num = (num * 10) + (*str - '0');
		str++;
	}
	return(num * neg);
}


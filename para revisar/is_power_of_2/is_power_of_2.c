/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   is_power_of_2.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abastida <abastida@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/31 11:23:15 by abastida          #+#    #+#             */
/*   Updated: 2023/01/31 11:23:15 by abastida         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	is_power_of_2(unsigned int n)
{
	unsigned int num = 1;

	while (num <= n)
	{
		if (num == n)
			return(1);
		num = num * 2;
	}
	return(0);
}

int	main()
{
	int n = 1;
	int result; 
	result = is_power_of_2(n);
	printf("result:%d\n", result);
	return(0);
}

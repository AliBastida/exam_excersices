/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   is_power_of_2.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abastida <abastida@student.42barcelona.co  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/05 11:15:54 by abastida          #+#    #+#             */
/*   Updated: 2023/06/05 11:22:08 by abastida         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int	    is_power_of_2(unsigned int n)
{
	if (n == 0)
		return (0);
	if ( n == 1 || n % 2 == 0)
		return(1);
	else
		return (0);
}

int main()
{
	unsigned int n = 28;
	printf("%d\n", is_power_of_2(n));
}

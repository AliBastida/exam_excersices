/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lcm.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abastida <abastida@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/13 13:42:09 by abastida          #+#    #+#             */
/*   Updated: 2023/05/13 13:42:09 by abastida         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

unsigned int lcm(unsigned int a, unsigned int b)
{
	unsigned int num = 0;
	if (a == 0 || b == 0)
		return (0);
	num = b;
	if (a > b)
		num = a;
	while (1)
	{
		if ((num % a == 0) && (num % b == 0))
			break ;
		num++;
	}
	return (num);
}

int main()
{
	unsigned int a = 2;
	unsigned int b = 3;
	unsigned int result = lcm(a, b);
	printf("%u\n", result);
	return (0);
}

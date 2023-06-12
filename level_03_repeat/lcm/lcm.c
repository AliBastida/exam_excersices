/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lcm.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abastida <abastida@student.42barcelona.co  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/08 11:52:48 by abastida          #+#    #+#             */
/*   Updated: 2023/06/08 13:46:59 by abastida         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

unsigned int    lcm(unsigned int a, unsigned int b)
{
	unsigned int num;

	if (a == 0 || b == 0)
		return (0);
	if (a >= b)
		num = a;
	else
		num = b;
	while (num)
	{
		if (num % a == 0 && num % b == 0)
			return (num);
		num++;
	}
	return (0);
}

int main()
{
	unsigned int a = 6;
	unsigned int b = 6;
	printf("%d", lcm(a, b));
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pgcd.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abastida <abastida@student.42barcelona.co  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/08 13:54:32 by abastida          #+#    #+#             */
/*   Updated: 2023/06/08 14:02:03 by abastida         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

unsigned int pgcd(unsigned int a, unsigned int b)
{
	unsigned int result;
	if (a == 0 || b == 0)
		return (0);
	result = a;
	if (b < a)
		result = b;
	while (result)
	{
		if (a % result == 0 && b % result == 0)
			return (result);
		result--;
	}
	return (0);
}

int main(int ac, char **av)
{
	if (ac == 3)
	{
		printf("%d\n", pgcd(atoi(av[1]), atoi(av[2])));
	}
	else
		printf("\n");
	return (0);
}

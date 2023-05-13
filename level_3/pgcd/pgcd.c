/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pgcd.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abastida <abastida@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/13 15:12:45 by abastida          #+#    #+#             */
/*   Updated: 2023/05/13 15:12:45 by abastida         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	pgcd(int a, int b)
{
	int num;

	if ((a == 0) || (b == 0))
		return (0);
	num = a;
	if (b < a)
		num = b;
	while (num > 0)
	{
		if (a % num == 0 && b % num == 0)
			break ;
		num--;
	}
	printf("%d", num);
	return (num);
}

int main(int ac, char **av)
{
	if (ac == 3)
		pgcd(atoi(av[1]), atoi(av[2]));
	printf("\n");
	return (0);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fprime.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abastida <abastida@student.42barcelona.co  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/09 14:06:42 by abastida          #+#    #+#             */
/*   Updated: 2023/06/09 14:17:13 by abastida         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

void	fprime(int num)
{
	int n = 2;

	if (num == 1)
		printf("1");
	while (num > 1)
	{
		if (num % n == 0)
		{
			printf("%d", n);
			if (num == n)
				break ;
			printf ("*");
			num = num / n;
		}
		else n++;
	}
}

int main(int ac, char **av)
{
	if (ac == 2)
		fprime(atoi(av[1]));
	printf("\n");
	return (0);
}

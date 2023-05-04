/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   do_op.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abastida <abastida@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/04 15:14:11 by abastida          #+#    #+#             */
/*   Updated: 2023/05/04 15:14:11 by abastida         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

void	do_op(int num1, char *c, int num2)
{
	int result = 0;
	if (c[0] == '+')
	{
		result = num1 + num2;
		printf("%d", result);
	}
	if(c[0] == '-')
	{
		result = num1 - num2;
		printf("%d", result);
	}
	if(c[0] == '*')
	{
		result = num1 * num2;
		printf("%d", result);
	}
	if(c[0] == '/')
	{
		result = num1 / num2;
		printf("%d", result);
	}
	if(c[0] == '%')
	{
		result = num1 / num2;
		printf("%d", result);
	}
}



int	main(int ac, char **av)
{
	if (ac == 4)
		do_op(atoi(av[1]), av[2], atoi(av[3]));
	printf("\n");
	return (0);
}

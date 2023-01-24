/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   do_op.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abastida <abastida@student.42barcelona.co  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/22 17:36:14 by abastida          #+#    #+#             */
/*   Updated: 2023/01/22 18:35:00 by abastida         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>

/*
int main(int argc, char *argv[])
{
	if (argc == 4)
	{
		if (argv[2][0] == '+')
			printf("%d", (atoi(argv[1]) + atoi(argv[3])));
		if (argv[2][0] == '-')
			printf("%d", (atoi(argv[1]) - atoi(argv[3])));
		if (argv[2][0] == '*')
			printf("%d", (atoi(argv[1]) * atoi(argv[3])));
		if (argv[2][0] == '/')
			printf("%d", (atoi(argv[1]) / atoi(argv[3])));
		if (argv[2][0] == '%')
			printf("%d", (atoi(argv[1]) % atoi(argv[3])));
	}
	printf("\n");
	return (0);
}
*/


int	main(int ac, char *av[])
{
	int first_param;
	int	third_param;
	int	result;
	
	if(ac == 4)
	{
		first_param = atoi(av[1]);
		third_param = atoi(av[3]);
		if(av[2][0] == '+')
		{
			result = first_param + third_param;
			printf("%d\n", result);
		}
		if(av[2][0] == '-')
		{
			result = first_param - third_param;
			printf("%d\n", result);
		}
		if(av[2][0] == '*')
		{
			result = first_param * third_param;
			printf("%d\n", result);
		}
		if(av[2][0] == '/')
		{
			result = first_param / third_param;
			printf("%d\n", result);
		}
		if(av[2][0] == '%')
		{
			result = first_param % third_param;
			printf("%d\n", result);
		}
	}
	printf("\n");
	return(0);
}

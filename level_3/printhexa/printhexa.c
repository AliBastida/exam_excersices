/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printhexa.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abastida <abastida@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/13 16:34:55 by abastida          #+#    #+#             */
/*   Updated: 2023/05/13 16:34:55 by abastida         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int	ft_atoi(char *str)
{
	int i = 0;
	int num = 0;
	while (*str == ' ' || (*str >= 9 && *str<= 13))
		str++;
	while (str[i] >= '0' && str[i] <= '9')
	{
		num = (num * 10) + str[i] - '0';
		i++;
	}
	return (num);

}

void printhex(int num)
{
	char number[16] = "0123456789abcdef";
	if (num > 16)
		printhex(num / 16);
	write(1, &number[num % 16], 1);
}

int	main(int ac, char **av)
{
	if (ac == 2)
		printhex(ft_atoi(av[1]));
	write(1, "\n", 1);
	return (0);
}

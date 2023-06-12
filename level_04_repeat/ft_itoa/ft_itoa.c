/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abastida <abastida@student.42barcelona.co  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/12 13:08:46 by abastida          #+#    #+#             */
/*   Updated: 2023/06/12 14:02:42 by abastida         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>
#include <limits.h>

int numlen(int num)
{
	int len = 0;
	
	if (num <= 0)
		len++;
	while (num)
	{	
		num = num / 10;
		len++;
	}
	return (len);
}


char	*ft_itoa(int nbr)
{
	char *number;
	long int num = nbr;
	int len = numlen(nbr);

	number = (char *)malloc(sizeof(char) * len + 1);

	number[len] = '\0';
	if (num == 0)
		number[len - 1] = '0';
	if (num < 0)
	{
		number[0] = '-';
		num = num * -1;
	}
	while (num > 0)
	{
		len--;
		number[len] = num % 10 + '0';
		num = num / 10;
	}
	return (number);
}


int main()
{
	printf("%s\n", ft_itoa (0));
	printf("%s\n", ft_itoa(INT_MAX));
	printf("%s", ft_itoa(INT_MIN));
	return (0);
}

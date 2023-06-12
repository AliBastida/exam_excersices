/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnumber.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abastida <abastida@student.42barcelona.co  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/09 13:14:44 by abastida          #+#    #+#             */
/*   Updated: 2023/06/12 17:49:15 by abastida         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <limits.h>

void ft_putnumber(int num)
{
	char number[10] = "0123456789";
	long int numb = num;
	if (numb < 0)
	{
		write(1, "-", 1);
		numb = numb * -1;
	}
	if (numb > 9)
		ft_putnumber(numb/10);
	write(1, &number[numb%10], 1);

/*	char number[11];
	int i = 0;

	long int numb = num;

	//si num == 0;
	if (num == 0)
		write(1, "0", 1);
	//si num < 0;
	else if(num < 0)
	{
		write(1, "-", 1);
		numb = numb * -1;
	}
	//si num > 0;
	while (numb > 0)
	{
		number[i] = numb % 10 + '0';
		i++;
		numb = numb / 10;
	}
	while (i > 0)
	{
		write(1, &number[--i], 1);
	}*/
}

int main()
{
	ft_putnumber(INT_MIN);
	return (0);
}

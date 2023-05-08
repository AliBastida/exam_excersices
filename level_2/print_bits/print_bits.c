/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_bits.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abastida <abastida@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/08 16:13:41 by abastida          #+#    #+#             */
/*   Updated: 2023/05/08 16:13:41 by abastida         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	print_bits(unsigned char octet)
{
	char bit;
	int i = 7;
	while(i >=0)
	{
		bit = ((octet>>i) & 1) + '0';
		write(1, &bit, 1);
		i--;
	}
}

int	main()
{
	unsigned char c = 'A';
	print_bits(c);
	return(0);
}

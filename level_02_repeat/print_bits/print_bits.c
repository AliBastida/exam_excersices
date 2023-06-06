/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_bits.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abastida <abastida@student.42barcelona.co  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/05 16:22:21 by abastida          #+#    #+#             */
/*   Updated: 2023/06/05 16:35:00 by abastida         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	print_bits(unsigned char octet)
{
	int mascara = 128;
	unsigned int bit;
	while (mascara > 0)
	{
		bit = octet & mascara;
		if (bit == 0)
			write(1,"0", 1);
		else
			write (1, "1", 1);
		mascara = mascara / 2;
	}

}

int main()
{
	unsigned char a = 2;
	print_bits(a);
	return (0);
}

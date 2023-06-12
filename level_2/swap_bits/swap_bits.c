/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap_bits.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abastida <abastida@student.42barcelona.co  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/21 12:17:23 by abastida          #+#    #+#             */
/*   Updated: 2023/05/21 12:43:16 by abastida         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void print_bits(unsigned char octet);

unsigned char swap_bits(unsigned char octet)
{
	unsigned char bit = '\0';
	
	bit += ((octet & 128)>>4);
	bit += ((octet & 64)>>4);
	bit += ((octet & 32)>>4);
	bit += ((octet & 16)>>4);
	bit += ((octet & 8)<<4);
	bit += ((octet & 4)<<4);
	bit += ((octet & 2)<<4);
	bit += ((octet & 1)<<4);
/*
	unsigned char out = 0;

	out += ((octet & 128) >> 7);
	out += ((octet & 64) >> 5);
	out += ((octet & 32) >> 3);
	out += ((octet & 16) >> 1);
	out += ((octet & 8) << 1);
	out += ((octet & 4) << 3);
	out += ((octet & 2) << 5);
	out += ((octet & 1) << 7);
*/
//	return(out);

	return(bit);
}
/*
void print_bits(unsigned char octet)
{
	int mascara = 128;
	unsigned char bit = 0;
	while (mascara > 0)
	{
		bit = octet & mascara;
		if (bit == 0)
			write(1, "0", 1);
		else
			write(1, "1", 1);
		mascara = mascara / 2;
	}
}

int main()
{
	unsigned char c = 'A';
	print_bits(c);
	write(1,"\n", 1);
	swap_bits(c);
	print_bits(c);
	return (0);
}*/

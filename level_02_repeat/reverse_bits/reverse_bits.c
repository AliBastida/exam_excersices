/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse_bits.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abastida <abastida@student.42barcelona.co  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/05 16:39:36 by abastida          #+#    #+#             */
/*   Updated: 2023/06/05 16:47:59 by abastida         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

unsigned char	reverse_bits(unsigned char octet)
{
	unsigned char bit;

	bit += ((octet & 128) >> 7);
	bit += ((octet & 64) >> 5);
	bit += ((octet & 32) >> 3);
	bit += ((octet & 16) >> 1);
	bit += ((octet & 8) << 1);
	bit += ((octet & 4) << 3);
	bit += ((octet & 2) << 5);
	bit += ((octet & 1) << 7);

	return (bit);
}



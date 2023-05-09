/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse_bits.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abastida <abastida@student.42barcelona.co  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/09 09:40:35 by abastida          #+#    #+#             */
/*   Updated: 2023/05/09 09:47:24 by abastida         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned char	reverse_bits(unsigned char octet)
{
	unsigned char bits;

	bits += ((octet & 128)>>7);
	bits += ((octet & 64)>>5);
	bits += ((octet & 32)>>3);
	bits += ((octet & 16)>>1);
	bits += ((octet & 8)<<1);
	bits += ((octet & 4)<<3);
	bits += ((octet & 2)<<5);
	bits += ((octet & 1)<<7);

	return(bits);

}

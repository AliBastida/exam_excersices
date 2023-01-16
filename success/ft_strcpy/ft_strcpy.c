/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abastida <abastida@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/16 12:33:52 by abastida          #+#    #+#             */
/*   Updated: 2023/01/16 13:17:35 by abastida         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <string.h>
#include <stdio.h>

char	*ft_strcpy(char *s1, char *s2)
{
	int i; 

	i = 0;
	while(s2[i])
	{
		s1[i] = s2[i];
		i++;
	}
	s1[i] = '\0';
	return(s1);
}

/*int main(void)
{
	char src[15] = "Hola";
	char dst[15] = " ";
	const char src2[15] = "Hola";
	char *result_mine;
	char *result_theirs;

	result_mine = ft_strcpy(dst, src);
	result_theirs = strcpy(dst, src2);

	printf("My strcpy: %s\n", result_mine);
	printf("Theirs: %s\n", result_theirs);

	return(0);
}*/

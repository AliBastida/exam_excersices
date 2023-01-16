/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abastida <abastida@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/10 13:46:07 by abastida          #+#    #+#             */
/*   Updated: 2023/01/10 14:50:01 by abastida         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <string.h>

int	ft_strcmp(char *s1, char *s2)
{
	int i;

	i=0;
	while(s1[i] && s2[i] && s1[i] == s2[i])
		i++;
	return(s1[i]-s2[i]);
}

/*int main()
{
	char s1[12] = "Hola";
	char s2[12] = "Bye bye";
	char s3[12] = "Bye bye";
	int	res_ft_strcmp;
	int	res_strcmp;

	res_strcmp = strcmp(s1, s2);
	printf("Resultado strcmpr:%d\n", res_strcmp);
	res_ft_strcmp = ft_strcmp(s1, s3);
	printf("Resultado ft_strcmpr:%d\n", res_ft_strcmp);


	return(0);
}*/

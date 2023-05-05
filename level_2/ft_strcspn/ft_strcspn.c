/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcspn.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abastida <abastida@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/05 10:45:06 by abastida          #+#    #+#             */
/*   Updated: 2023/05/05 10:45:06 by abastida         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <printf.h>
#include <string.h>

size_t	ft_strcspn(const char *s, const char *reject)
{
	size_t i = 0;
	size_t j;
	while (s[i])
	{
	j = 0;
		while (reject[j])
		{
			if (s[i] == reject[j])
				return (i);
			j++;
		}
		i++;
	}
	return (0);
}

int	main()
{
	const char s[14] = "hola123como56";
	const char reject[5] = "ciao";
	size_t result_mine = 0;
	size_t result_theirs = 0;
	result_theirs = strcspn(s, reject);
	result_mine = ft_strcspn(s, reject);
	return (0);
}

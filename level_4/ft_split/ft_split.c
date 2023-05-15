/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abastida <abastida@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/15 12:45:23 by abastida          #+#    #+#             */
/*   Updated: 2023/05/15 12:45:23 by abastida         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>

int is_space(char *s1)
{
	int i = 0;
	if (s1[i] == ' ' || s1[i] == '\t' || s1[i] =='\n')
		return (1);
	return (0);
}

int count_words(char *s1)
{
	int i = 0;
	int num_word = 0;
	while (s1[i])
	{
		if (is_space(&s1[i]) == 1)
			i++;
		if (is_space(&s1[i]) == 0 && ( i == 0 || (is_space(&s1[i-1]) == 1)))
			num_word++;
		i++;
	}
	return (num_word);
}

char *saved_word(char *s1, int start, int end)
{
	char *saved_word;
	int i = 0;
	int len = end - start + 1;
	saved_word = (char *)malloc(sizeof(char) * len);
	if (!saved_word)
		return (NULL);
	while (i < len)
	{
		saved_word[i] = s1[start];
		start++;
		i++;
	}
	saved_word[i] = '\0';
	return(saved_word);
}

char **ft_split(char *s1)
{
	char **word;
	int x = 0;
	int i = 0;
	int start = 0;
	int end = 0;
	word = (char **)malloc(sizeof(char *) * count_words(s1) + 1);
	if (!word)
		return (NULL);
	while (s1[i])
	{
		if (is_space(&s1[i]) == 0 && ( i == 0 || (is_space(&s1[i-1]) == 1)))
			start = i;
		if (!is_space(&s1[i]) && ((is_space(&s1[i + 1]) == 1 || s1[i + 1] == '\0')))
		{
			end = i;
			word[x] = saved_word(s1, start, end);
			x++;
		}
		i++;
	}
	word[x] = NULL;
	return (word);
}


int main()
{
	char str[30] = "hola como estas";
	int i = 0;
	char **split_words = ft_split(str);
	while (split_words[i])
	{
		printf("%s\n", split_words[i]);
		i++;
	}
	return(0);
}

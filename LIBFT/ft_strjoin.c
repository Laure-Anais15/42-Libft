/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: laurperi <laurperi@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/25 09:30:25 by laurperi          #+#    #+#             */
/*   Updated: 2024/06/25 10:00:01 by laurperi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	int		i;
	int		j;
	int		length;
	char	*new;

	length = ft_strlen(s1) + ft_strlen(s2);
	i = 0;
	j = 0;
	new = (char *)malloc (sizeof(char) * (length + 1));
	if (!new)
		return (NULL);
	while (s1[i] != '\0')
	{
		new[i] = s1[i];
		i++;
	}
	while (s2[j] != '\0')
	{
		new[i] = s2[j];
		i++;
		j++;
	}
	new[i] = '\0';
	return (new);
}
/*
int main (void)
{
	char const *str1 = "Thanks";
	char const *str2 = "giving";
	char *result = ft_strjoin(str1, str2);

	printf("'%s' + '%s' = %s \n", str1, str2, result);
	return (0);
}*/

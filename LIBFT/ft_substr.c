/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: laurperi <laurperi@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/24 15:32:18 by laurperi          #+#    #+#             */
/*   Updated: 2024/06/24 16:42:59 by laurperi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <aio.h>
#include <stdio.h>

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*substr;
	size_t	i;

	i = 0;
	substr = (char *)malloc (sizeof(char) * (len + 1));
	if (!substr)
		return (NULL);
	while (i < len || s[start] == '\0')
	{
		substr[i] = s[start];
		i++;
		start++;
	}
	substr[i] = '\0';
	return (substr);
}
/*
int main(void)
{
	char const *string = "I will try my best";
	unsigned int debut = 7;
	size_t nb = 3;
	char *result = ft_substr(string, debut, nb);

	if (result == NULL)
		printf ("Fail : %s\n", result);
	else
		printf("Bravo ! La substring recherchee est : '%s'\n", result);
	return (0);
}*/

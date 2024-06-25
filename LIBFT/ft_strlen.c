/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: laurperi <laurperi@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/19 09:26:14 by laurperi          #+#    #+#             */
/*   Updated: 2024/06/19 10:46:56 by laurperi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <aio.h>
//#include <stdio.h>

size_t	ft_strlen(const char *s)
{
	size_t	i;

	i = 0;
	while (s[i] != '\0')
	{
		i++;
	}
	return (i);
}
/*
int	main(void)
{
	const char *string = "Hi, how are you?";
	size_t length = ft_strlen(string);
	printf ("Length : %zu characters\n", length);
	return (0);
}*/

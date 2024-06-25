/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: laurperi <laurperi@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/20 10:25:59 by laurperi          #+#    #+#             */
/*   Updated: 2024/06/21 11:51:37 by laurperi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

char	*ft_strchr(const char *s, int c)
{
	int	i;

	i = 0;
	while (s[i] != '\0')
	{
		if (s[i] == c)
			return ((char *)&s[i]);
		i++;
	}
	if (c == '\0')
		return ((char *)&s[i]);
	return (0);
}
/*
int main(void)
{
	const char *string = "Welcome back";
	int letter = 'b';

	char *result = ft_strchr(string, letter);
	
	if (result == NULL)
		printf("Character not found");
	else
		printf("Character '%c' found: %s\n", letter, result);
	return (0);
}*/

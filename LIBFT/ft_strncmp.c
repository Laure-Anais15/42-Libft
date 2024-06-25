/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: laurperi <laurperi@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/19 13:06:04 by laurperi          #+#    #+#             */
/*   Updated: 2024/06/19 14:41:07 by laurperi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
#include <aio.h>

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	i = 0;
	while ((s1[i] == s2[i]) && i < n - 1)
	{
		i++;
	}
	return (s1[i] - s2[i]);
}
/*
int main(void)
{
	char *string1 = "Holidays";
	char *string2 = "Holy day";
	size_t length = 4;
	int result = ft_strncmp(string1, string2, length);

	if (result == 0)
		printf ("Same words\n");
	else if (result < 0)
		printf("'%s' comes before '%s'\n", string1, string2);
	else
		printf("'%s' comes before '%s'\n", string2, string1);
	return (0);
}*/

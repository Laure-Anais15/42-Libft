/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: laurperi <laurperi@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/20 13:39:25 by laurperi          #+#    #+#             */
/*   Updated: 2024/06/21 12:24:41 by laurperi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
#include <aio.h>

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	int		j;
	char	*ref;

	i = 0;
	if (*little == '\0')
		return ((char *)big);
	while (big[i] != '\0' && i < len)
	{
		j = 0;
		if (big[i] == little[j])
			ref = (char *)&big[i];
		while (big[i] == little[j])
		{
			i++;
			j++;
			if (little[j] == '\0')
				return (ref);
		}
		i++;
	}
	return (0);
}
/*
int main(void)
{
	const char *str = "elephant";
	const char *searched = "eph";
	size_t length = 3;
	char *result = ft_strnstr(str, searched, length);

	printf("%s\n", result);
	return (0);
}*/

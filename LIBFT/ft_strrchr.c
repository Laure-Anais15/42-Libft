/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: laurperi <laurperi@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/20 11:58:53 by laurperi          #+#    #+#             */
/*   Updated: 2024/06/21 11:49:46 by laurperi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

char	*ft_strrchr(const char *s, int c)
{
	int		i;
	char	*lastc;

	i = 0;
	lastc = 0;
	while (s[i] != '\0')
	{
		if (s[i] == c)
			lastc = (char *)&s[i];
		i++;
	}
	if (c == '\0')
		return ((char *)&s[i]);
	if (lastc > 0)
		return (lastc);
	else
		return (0);
}
/*
int main(void)
{
	const char *string = "Chaussettes";
	int lettre = 'e';
	char *result = ft_strrchr(string, lettre);
	
	if (result == NULL)
		printf("Character not found");
	else
		printf("Last character '%c' found in '%s': %s", lettre,string, result);
	return (0);
}*/

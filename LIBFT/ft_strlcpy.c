/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: laurperi <laurperi@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/21 12:13:58 by laurperi          #+#    #+#             */
/*   Updated: 2024/06/21 14:24:34 by laurperi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

size_t	strlcpy(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	src_length;

	i = 0;
	src_length = 0;
	if (size == 0)
		return (1);
	while (src[src_length] != '\0')
	{
		src_length++;
	}
	while (src[i] != '\0' && i < size - 1)
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
	return (src_length);
}
/*
int	main (void)
{
	char dest[20];
	char *source = "Hello World";
	size_t size = 8;
	size_t result = strlcpy (dest, source, size);

	printf ("Longueur de la source a copier : %zu \n", result);
	printf ("Source copiee : %s\n", dest);
	return (0);
}*/

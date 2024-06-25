/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: laurperi <laurperi@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/21 14:26:57 by laurperi          #+#    #+#             */
/*   Updated: 2024/06/21 14:57:35 by laurperi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	dst_length;
	size_t	i;

	dst_length = 0;
	i = 0;
	while (dst[dst_length] != '\0')
		dst_length++;
	while (src[i] != '\0' && i < size)
	{
		dst[dst_length] = src[i];
		dst_length++;
		i++;
	}
	dst[dst_length] = '\0';
	return (dst_length);
}
/*
int main (void)
{
	char dest[25] = "Sun";
	char *source = "Flower!";
	size_t size = 6;

	printf("%s + %s\n", dest, source);
	size_t result = ft_strlcat(dest, source, size);

	printf("Result : %zu\n", result);
	printf("dest: %s\n", dest);
	printf("source: %s\n", source);
	return (0);
}*/

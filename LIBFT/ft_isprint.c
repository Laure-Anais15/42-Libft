/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: laurperi <laurperi@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/19 12:37:16 by laurperi          #+#    #+#             */
/*   Updated: 2024/06/19 12:52:33 by laurperi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_isprint(int c)
{
	if (c >= 32 && c <= 126)
		return (1);
	else
		return (0);
}
/*
int main (void)
{
	printf("Test with 'A': %d (expected: 1)\n", ft_isprint('A'));
	printf("Test with '2': %d (expected: 1)\n", ft_isprint('2'));
	printf("Test with '@': %d (expected: 1)\n", ft_isprint('@'));
	printf("Test with 75 (K): %d (expected: 1)\n", ft_isprint(75));
	printf("Test with 'e': %d (expected: 1)\n", ft_isprint('e'));
	printf("Test with '{': %d (expected: 1)\n", ft_isprint('{'));
	printf("Test with ASCII 127: %d (expected: 0)\n", ft_isprint(127));
	printf("Test with '|': %d (expected: 1)\n", ft_isprint('|'));
	return (0);
}*/

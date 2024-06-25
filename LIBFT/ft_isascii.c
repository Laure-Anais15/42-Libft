/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: laurperi <laurperi@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/19 11:42:06 by laurperi          #+#    #+#             */
/*   Updated: 2024/06/19 12:34:34 by laurperi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_isascii(int c)
{
	if (c >= 0 && c <= 127)
		return (1);
	else
		return (0);
}
/*
int main (void)
{
	printf("Test with ASCII 254: %d (expected: 0)\n", ft_isascii(254));	
	printf("Test with '2': %d (expected: 1)\n", ft_isascii('2'));	
	printf("Test with '@': %d (expected: 1)\n", ft_isascii('@'));	
	printf("Test with ASCII 270: %d (expected: 0)\n", ft_isascii(270));	
	printf("Test with 'e': %d (expected: 1)\n", ft_isascii('e'));	
	printf("Test with ASCII 140: %d (expected: 0)\n", ft_isascii(140));	
	printf("Test with ASCII 25: %d (expected: 1)\n", ft_isascii(25));	
	return (0);
}*/

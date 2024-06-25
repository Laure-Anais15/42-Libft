/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: laurperi <laurperi@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/19 11:32:47 by laurperi          #+#    #+#             */
/*   Updated: 2024/06/19 11:37:54 by laurperi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_isdigit(int c)
{
	if (c >= 48 && c <= 57)
		return (1);
	else
		return (0);
}
/*
int main (void)
{
	printf("Test with 'A': %d (expected: 0)\n", ft_isdigit('A'));	
	printf("Test with '2': %d (expected: 1)\n", ft_isdigit('2'));	
	printf("Test with '@': %d (expected: 0)\n", ft_isdigit('@'));	
	printf("Test with 75 (K): %d (expected: 0)\n", ft_isdigit(75));	
	printf("Test with 'e': %d (expected: 0)\n", ft_isdigit('e'));	
	printf("Test with '9': %d (expected: 1)\n", ft_isdigit('9'));	
	printf("Test with '!': %d (expected: 0)\n", ft_isdigit('!'));	
	return (0);
}*/

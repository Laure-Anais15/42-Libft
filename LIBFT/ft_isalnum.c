/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: laurperi <laurperi@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/19 11:23:10 by laurperi          #+#    #+#             */
/*   Updated: 2024/06/19 11:31:08 by laurperi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_isalnum(int c)
{
	if ((c >= 48 && c <= 57)
		|| (c >= 65 && c <= 90) || (c >= 97 && c <= 122))
		return (1);
	else
		return (0);
}
/*
int main (void)
{
	printf("Test with 'A': %d (expected: 1)\n", ft_isalnum('A'));	
	printf("Test with '2': %d (expected: 1)\n", ft_isalnum('2'));	
	printf("Test with '@': %d (expected: 0)\n", ft_isalnum('@'));	
	printf("Test with 75 (K): %d (expected: 1)\n", ft_isalnum(75));	
	printf("Test with 'e': %d (expected: 1)\n", ft_isalnum('e'));	
	printf("Test with '{': %d (expected: 0)\n", ft_isalnum('{'));	
	printf("Test with '!': %d (expected: 0)\n", ft_isalnum('!'));	
	return (0);
}*/

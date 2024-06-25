/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: laurperi <laurperi@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/19 10:32:00 by laurperi          #+#    #+#             */
/*   Updated: 2024/06/19 11:20:44 by laurperi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_isalpha(int c)
{
	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
		return (1);
	else
		return (0);
}
/*
int main (void)
{
	printf("Test with 'A': %d (expected: 1)\n", ft_isalpha('A'));	
	printf("Test with '2': %d (expected: 0)\n", ft_isalpha('2'));	
	printf("Test with '@': %d (expected: 0)\n", ft_isalpha('@'));	
	printf("Test with 75 (K): %d (expected: 1)\n", ft_isalpha(75));	
	printf("Test with 'e': %d (expected: 1)\n", ft_isalpha('e'));	
	printf("Test with '{': %d (expected: 0)\n", ft_isalpha('{'));	
	printf("Test with '!': %d (expected: 0)\n", ft_isalpha('!'));	
	return (0);
}*/

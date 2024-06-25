/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: laurperi <laurperi@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/24 11:32:33 by laurperi          #+#    #+#             */
/*   Updated: 2024/06/24 11:47:30 by laurperi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar_fd(char c, int fd)
{
	write (fd, &c, 1);
}
/*
int main (void)
{
	char letter = 'o';
	int fd = 1;

	ft_putchar_fd(letter, fd);
	ft_putchar_fd('r', 1);
	return (0);
}*/

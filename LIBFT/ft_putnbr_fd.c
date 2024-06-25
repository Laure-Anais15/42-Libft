/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: laurperi <laurperi@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/24 12:48:15 by laurperi          #+#    #+#             */
/*   Updated: 2024/06/24 15:30:53 by laurperi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putnbr_fd(int n, int fd)
{
	if (n < 0)
	{
		write (fd, "-", 1);
		n *= -1;
	}
	if (n == -2147483648)
	{
		write(fd, "2", 1);
		ft_putnbr_fd(147483648, fd);
	}
	else if (n > 9)
	{
		ft_putnbr_fd(n / 10, fd);
		ft_putnbr_fd(n % 10, fd);
	}
	else
	{
		n += '0';
		write(fd, &n, 1);
	}
}
/*
int main (void)
{
	ft_putnbr_fd(2458, 1);
	write (1, "\n", 1);
	ft_putnbr_fd(0, 1);
	write (1, "\n", 1);
	ft_putnbr_fd(2147483647, 1);
	write (1, "\n", 1);
	ft_putnbr_fd(754184, 1);
	write (1, "\n", 1);
	ft_putnbr_fd(-2147483648, 1);
	write (1, "\n", 1);
	return(0);
}*/

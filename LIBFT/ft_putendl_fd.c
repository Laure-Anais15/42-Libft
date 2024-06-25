/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: laurperi <laurperi@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/24 11:57:32 by laurperi          #+#    #+#             */
/*   Updated: 2024/06/24 12:07:44 by laurperi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putendl_fd(char *s, int fd)
{
	int	i;

	i = 0;
	while (s[i] != '\0')
	{
		write (fd, &s[i], 1);
		i++;
	}
	write (fd, "\n", 1);
}
/*
int main (void)
{
	char *str = "Summer break";
	char *str2 = "Winter storm";
	int fd = 1;

	ft_putendl_fd(str, fd);
	ft_putendl_fd(str2, fd);
	return(0);
}*/

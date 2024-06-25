/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: laurperi <laurperi@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/19 10:04:31 by laurperi          #+#    #+#             */
/*   Updated: 2024/06/19 10:53:34 by laurperi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <unistd.h>

int	ft_tolower(int c)
{
	if (c >= 65 && c <= 90)
		c += 32;
	return (c);
}
/*
int main(void)
{
	char c = 'e';
	char d = 'M';
	char e = '!';
	int lowC = ft_tolower(c);
	int lowD = ft_tolower(d);
	int lowE = ft_tolower(e);
	write(1, &lowC, 1);
	write(1, "\n", 1);
	write(1, &lowD, 1);
	write(1, "\n", 1);
	write(1, &lowE, 1);
	write(1, "\n", 1);
	return (0);
}*/

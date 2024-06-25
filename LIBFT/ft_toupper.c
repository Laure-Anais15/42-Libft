/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: laurperi <laurperi@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/19 09:48:52 by laurperi          #+#    #+#             */
/*   Updated: 2024/06/19 10:03:30 by laurperi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <unistd.h>

int	ft_toupper(int c)
{
	if (c >= 97 && c <= 122)
		c -= 32;
	return (c);
}
/*
int main(void)
{
	char c = 'e';
	char d = 'M';
	char e = '!';
	int majC = ft_toupper(c);
	int majD = ft_toupper(d);
	int majE = ft_toupper(e);
	write(1, &majC, 1);
	write(1, "\n", 1);
	write(1, &majD, 1);
	write(1, "\n", 1);
	write(1, &majE, 1);
	write(1, "\n", 1);
	return (0);
}*/

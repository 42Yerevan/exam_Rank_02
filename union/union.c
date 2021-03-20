/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   union.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmusaely <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/17 19:22:36 by vmusaely          #+#    #+#             */
/*   Updated: 2021/03/19 11:12:54 by vmusaely         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		ft_strlen(char *s)
{
	int i;

	i = 0;
	while (s[i])
		i++;
	return (i);
}

int		ft_chr(char *s, int c, int l)
{
	int i;

	i = 0;
	while (i < l)
	{
		if (s[i] == c)
			return (0);
		i++;
	}
	return (1);
}

void	ft_union(char *s1, char *s2)
{
	int i;

	i = 0;
	while (s1[i])
	{
		if (ft_chr(s1, s1[i]), i)
			write(1, (s1 + i), 1);
		i++;
	}
	i = 0;
	while (s2[i])
	{
		if (ft_chr(s2, s2[i], i) && ft_chr(s1, s2[i], ft_strlen(s1))
			write(1, (s2 + i), 1);
		i++;
	}
}

int		main(int ac, char **av)
{
	if (ac == 3)
		ft_union(av[1], av[2]);
	write(1, "\n", 1);
}

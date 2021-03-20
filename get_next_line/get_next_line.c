/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmusaely <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/19 11:27:22 by vmusaely          #+#    #+#             */
/*   Updated: 2021/03/19 11:37:59 by vmusaely         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

int		get_next_line(char **line)
{
	int		i;
	int		r;
	char	c;
	char	*str;

	if (!(str = (char *)malloc(10000)) || !line)
		return (-1);
	i = 0;
	while ((r = read(0, &c, 1)) && c != '\n' && c != '\0')
	{
		if (c != '\n' && c != '\0')
			str[i] = c;
		i++;
	}
	str[i] = '\0';
	*line = str;
	return (r);
}
/*
int		main()
{
	char *line;

	printf("%d", get_next_line(&line));
	printf("%s", line);
}*/

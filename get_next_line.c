/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmilitar <mmilitar@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/07 20:58:44 by mmilitar          #+#    #+#             */
/*   Updated: 2024/12/08 11:09:50 by mmilitar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char	*ft_free()
{
}

char	ft_next()
{
}

char	ft_line()
{
}

char	read_file*()
{
}

char	*get_next_line(int fd)
{
	static char	*buffer;
	char		*line;

	if (fd < 0 || BUFFER_SIZE <= 0 || read(fd, 0, 0) < 0)
		return (NULL);
	if(!buffer)
		return (NULL);
	line = ft_line(buffer);
	buffer = ft_next(buffer;
	return (line);
}

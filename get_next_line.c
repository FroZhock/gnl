/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmirmuln <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/07 18:56:30 by jmirmuln          #+#    #+#             */
/*   Updated: 2021/11/07 19:45:56 by jmirmuln         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <unistd.h>

char *get_next_line(int fd)
{
    char    *buff;
    char    *line;
    int     read_status;
    if (!fd || !BUFFER_SIZE)
        return (NULL);
    buff = (char *)malloc(sizeof (char) * (BUFFER_SIZE + 1));
    read_status = read(fd, buff, BUFFER_SIZE);
    buff[BUFFER_SIZE] = '\0';
    if (read_status == - 1 || buff == NULL)
        return (NULL);
    line = ft_strdup(buff);
}

int main (void)
{
    char    *line;
    int     fd;
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmirmuln <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/07 20:18:04 by jmirmuln          #+#    #+#             */
/*   Updated: 2021/11/07 20:18:34 by jmirmuln         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strdup(const char	*s1)
{
	int		i;
	char	*p;

	i = 0;
	while (s1[i])
		i++;
	p = (char *)malloc(i + 1);
	if (p == NULL)
		return (NULL);
	p[i] = '\0';
	i = 0;
	while (s1[i])
	{
		p[i] = s1[i];
		i++;
	}
	return (p);
}
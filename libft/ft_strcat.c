/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: doriol <doriol@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/20 00:32:29 by doriol            #+#    #+#             */
/*   Updated: 2017/04/12 01:52:31 by doriol           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strcat(char *s1, const char *s2)
{
	int i;
	int y;

	i = 0;
	y = 0;
	while (s1[y])
		y++;
	while (s2[i])
	{
		s1[y] = s2[i];
		i++;
		y++;
	}
	s1[y] = '\0';
	return (s1);
}
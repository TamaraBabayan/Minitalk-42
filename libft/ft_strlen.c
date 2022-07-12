/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbabayan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/10 19:23:04 by tbabayan          #+#    #+#             */
/*   Updated: 2022/03/12 13:40:15 by tbabayan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include	"libft.h"

size_t	ft_strlen(const char *s)
{
	size_t	c;

	c = 0;
	while (*s != '\0')
	{
		c++;
		s++;
	}
	return (c);
}
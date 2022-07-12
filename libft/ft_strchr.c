/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbabayan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/12 14:18:44 by tbabayan          #+#    #+#             */
/*   Updated: 2022/03/19 17:37:52 by tbabayan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strchr(const char *s, int c)
{
	char	*ptr;
	char	c1;

	ptr = (char *)s;
	c1 = c;
	while (*ptr && *ptr != c1)
	{
		ptr++;
	}
	if (*ptr == c1)
		return (ptr);
	return (0);
}
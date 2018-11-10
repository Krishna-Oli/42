/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: koli <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/09 21:56:05 by koli              #+#    #+#             */
/*   Updated: 2018/11/09 21:56:50 by koli             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
	unsigned int	slen;
	char			*dst;

	if (!s)
		return (NULL);
	slen = ft_strlen(s);
	if (slen < start + len)
		return (NULL);
	dst = (char *)malloc(len + 1);
	if (!dst)
		return (NULL);
	ft_strncpy(dst, s + start, len);
	dst[len] = '\0';
	return (dst);
}

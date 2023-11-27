/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jyim <jyim@student.42kl.edu.my>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 16:02:16 by jyim              #+#    #+#             */
/*   Updated: 2022/11/07 16:03:02 by jyim             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	join_len;
	size_t	s1_len;
	size_t	s2_len;
	char	*strjoin;

	if (s1 == NULL || s2 == NULL)
		return (ft_strdup(""));
	s1_len = ft_strlen(s1);
	s2_len = ft_strlen(s2);
	join_len = s1_len + s2_len;
	strjoin = malloc(sizeof(char) * (join_len) + 1);
	if (!strjoin)
		return (0);
	ft_memmove(strjoin, s1, s1_len);
	ft_memmove(strjoin + s1_len, s2, s2_len);
	strjoin[join_len] = '\0';
	return (strjoin);
}

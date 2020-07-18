/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_cntchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmelodi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/15 17:04:41 by pmelodi           #+#    #+#             */
/*   Updated: 2019/09/16 22:02:06 by pmelodi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

int		ft_cntchr(char *s, char ch)
{
	int cnt;

	cnt = 0;
	if (!s)
		return (0);
	while (*s)
	{
		if (*s == ch)
			cnt++;
		s++;
	}
	return (cnt);
}
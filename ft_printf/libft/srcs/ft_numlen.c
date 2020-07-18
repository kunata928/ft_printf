/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_numlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmelodi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/11 12:18:38 by pmelodi           #+#    #+#             */
/*   Updated: 2019/09/11 15:35:44 by pmelodi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

int		ft_numlen(long int n)
{
	int len;

	len = (n <= 0) ? 1 : 0;
	n = (n < 0) ? -n : n;
	while (n > 0)
	{
		n /= 10;
		len++;
	}
	return (len);
}
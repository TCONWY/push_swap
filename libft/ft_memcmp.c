/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tconwy <tconwy@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/06 18:30:53 by tconwy            #+#    #+#             */
/*   Updated: 2021/11/02 20:17:14 by tconwy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

int	ft_memcmp(const void *arr1, const void *arr2, size_t n)
{
	unsigned char	*t;
	unsigned char	*y;
	size_t			c;

	t = (unsigned char *)arr1;
	y = (unsigned char *)arr2;
	c = 0;
	while (c < n)
	{
		if (t[c] != y[c])
			return (t[c] - y[c]);
		c++;
	}
	return (0);
}

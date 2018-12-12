/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: reda-con <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/09 16:30:33 by reda-con          #+#    #+#             */
/*   Updated: 2018/12/12 10:50:59 by reda-con         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/libft.h"
#include <stdlib.h>

char			*ft_itoa(int n)
{
	size_t	i;
	char	*ret;
	int		fl;

	fl = 0;
	i = ft_intlen(n);
	if (n < 0)
	{
		if (n == -2147483648)
			return (ft_strdup("-2147483648"));
		++fl;
		n *= -1;
	}
	if (!(ret = (char*)malloc(sizeof(char) * (i + 1))))
		return (NULL);
	ret[i] = '\0';
	while (i > 0)
	{
		ret[i - 1] = n % 10 + '0';
		--i;
		n /= 10;
	}
	if (fl == 1)
		ret[0] = '-';
	return (ret);
}

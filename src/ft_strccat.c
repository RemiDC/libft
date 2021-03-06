/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strccat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: reda-con <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/19 14:13:17 by reda-con          #+#    #+#             */
/*   Updated: 2018/11/23 17:37:01 by reda-con         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strccat(char *dst, const char *src, char c)
{
	int		i;
	int		j;

	i = 0;
	j = 0;
	while (dst[i])
		++i;
	while (src[j] && src[j] != c)
	{
		dst[i] = src[j];
		++i;
		++j;
	}
	dst[i] = '\0';
	return (dst);
}

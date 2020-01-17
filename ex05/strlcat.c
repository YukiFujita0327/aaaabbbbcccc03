/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strlcat.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yufujita <yufujita@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/16 23:26:49 by yufujita          #+#    #+#             */
/*   Updated: 2020/01/17 01:06:49 by yufujita         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strlcat(char *dest, char *src, unsigned int nb)
{
	unsigned int i;
	unsigned int j;

	i = 0;
	j = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	while (i != nb && src[i] != '\0')
	{
		if (src[j] != '\0')
		{
			dest[i] = src[i];
			j++;
			i++;
		}
	}
	if (src[i] != '\0')
	{
		dest[i] = '\0';
	}
	return (dest);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jose-ega <jose-ega@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/01 16:28:41 by jose-ega          #+#    #+#             */
/*   Updated: 2024/05/02 19:00:49 by jose-ega         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isascii(int c)
{
	if (c >= 0 && c <= 122)
		return (1);
	return (0);
}

/* int	main(void)
{
	int	c;

	c = ' ';

	printf("%d",ft_isascii(c));
	return (0);
} */

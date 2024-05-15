/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jose-ega <jose-ega@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/15 10:49:07 by jose-ega          #+#    #+#             */
/*   Updated: 2024/05/15 11:58:20 by jose-ega         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_strlen (const char *str)
{
    int i;

    i = 0;
    while (str[i] != '\0')
    {
        i++;
    }
    return (i);
}   

int main (void)
{
    char *word;
    
    word = "Tu puta madre";
    ft_strlen (word);
    printf ("%d\n", ft_strlen (word));
    return (0);
    
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jose-ega <jose-ega@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/02 18:48:19 by jose-ega          #+#    #+#             */
/*   Updated: 2024/05/02 18:58:34 by jose-ega         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H /* IF NOT DEFINED */
# define LIBFT_H

//# TUS INCLUDES

# include <stdio.h>
# include <unistd.h>
# include <string.h>
# include <stdlib.h>

//INTS chars, voids...etc
int	ft_isalnum(int c);
int	ft_isalpha(int c);
int	ft_isascii(int c);
int	ft_isdigit(int c);
int	ft_isprint(int c);

#endif
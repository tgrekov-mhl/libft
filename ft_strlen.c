/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tgrekov <tgrekov@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/23 13:37:27 by tgrekov           #+#    #+#             */
/*   Updated: 2023/11/04 22:24:23 by tgrekov          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/**
 * @file ft_strlen.c
 * @dontinclude ft_strlen.c
 * @line /\* *********
 * @until /\* *********
 */

#include "libft.h"

/**
 * @brief Get length of @p str
 * 
 * @param[in] str Pointer to string
 * @retval size_t Length of string starting at pointer @p str
 */
size_t	ft_strlen(const char *str)
{
	size_t	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

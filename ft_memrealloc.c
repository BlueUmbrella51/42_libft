/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_realloc.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: lravier <marvin@codam.nl>                    +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/03/31 10:24:11 by lravier       #+#    #+#                 */
/*   Updated: 2019/04/01 15:26:32 by lravier       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

#include <stdio.h>
void	*ft_memrealloc(void *ptr, size_t prev_size, size_t size)
{
	void *buff;

	if (size == 0)
	{
		return (ft_memalloc(size));
		free(ptr);
	}
	if (!ptr)
		return (ft_memalloc(size));
	if (size <= prev_size)
		return (ptr);
	buff = ft_memalloc(size);
	if (buff)
	{
		ft_memcpy(buff, ptr, prev_size);
		free(ptr);
	}
	return (buff);
}

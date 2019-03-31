/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_realloc.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: lravier <marvin@codam.nl>                    +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/03/31 10:24:11 by lravier       #+#    #+#                 */
/*   Updated: 2019/03/31 11:05:24 by lravier       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memrealloc(void *ptr, size_t size, size_t o_size)
{
	void *nbuff;

	if (size == 0)
	{
		free(ptr);
		return (NULL);
	}
	if (!ptr)
		return (ft_memalloc(size));
	if (size - o_size <= 0)
		return (ptr);
	nbuff = ft_memalloc(size);
	if (!nbuff)
		return (NULL);
	ft_memcpy(nbuff, ptr, size);
	free(ptr);
	return (nbuff);
}

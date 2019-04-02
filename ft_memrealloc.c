/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_realloc.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: lravier <marvin@codam.nl>                    +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/03/31 10:24:11 by lravier       #+#    #+#                 */
/*   Updated: 2019/04/02 17:03:04 by lravier       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memrealloc(void *ptr, size_t prev_size, size_t size)
{
	void *buff;
	int mlen;

	mlen = size;
	if (size == 0 || !ptr)
	{
		if (ptr)
			free(ptr);
		return (ft_memalloc(size));
	}
	if (size <= prev_size)
		mlen = prev_size;
	buff = ft_memalloc(mlen);
	if (!buff)
		return (NULL);
	ft_memcpy(buff, ptr, prev_size);
	free(ptr);
	return (buff);
}

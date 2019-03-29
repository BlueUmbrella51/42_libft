/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_memcpy.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: lravier <marvin@codam.nl>                    +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/03/21 10:11:03 by lravier       #+#    #+#                 */
/*   Updated: 2019/03/26 15:54:09 by lravier       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	char *d;
	char *s;

	s = (char*)src;
	d = (char*)dst;
	while (n > 0)
	{
		*d = *s;
		n--;
		d++;
		s++;
	}
	return (dst);
}

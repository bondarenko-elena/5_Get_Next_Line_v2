/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olbondar <olbondar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/08 14:51:04 by olbondar          #+#    #+#             */
/*   Updated: 2018/01/13 15:56:39 by olbondar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# include "libft/libft.h"
# include <sys/types.h>
# include <sys/uio.h>

# define BUFF_SIZE 8

typedef struct			s_list_my
{
	void				*content;
	size_t				content_size;
	struct s_list_my	*next;
	int					fd;
}						t_list_my;

int	get_next_line(const int fd, char **line);

#endif

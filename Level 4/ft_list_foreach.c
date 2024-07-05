/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_foreach.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mranaivo <mranaivo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/05 14:44:06 by mranaivo          #+#    #+#             */
/*   Updated: 2024/07/05 14:54:39 by mranaivo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

typedef struct	s_list
{
	struct s_list *next;
    void          *data;
}				t_list;

void	ft_list_foreach(t_list *begin_list,void (*f)(void *))
{
	while (begin_list)
	{
		(*f)(begin_list->data);
        begin_list = begin_list->next;
	}
}
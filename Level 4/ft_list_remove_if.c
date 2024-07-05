/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_remove_if.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mranaivo <mranaivo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/05 14:26:16 by mranaivo          #+#    #+#             */
/*   Updated: 2024/07/05 14:43:16 by mranaivo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

typedef struct	s_list
{
	void	*data;
	struct s_list	*next;
}						t_list;

void    ft_list_remove_if(t_list **begin_list, void *data_ref, int (*cmp)(void *, void *))
{
	if (*begin_list == NULL  || begin_list == NULL)
		return ;
	t_list    *temp = *begin_list;
	if (!(cmp(*begin_list->data, data_ref)))
	{
		*begin_list = temp->next;
        free(temp);
        ft_list_remove_if(begin_list, data_ref, cmp);
	}
	else
	{
		temp = *begin_list
		ft_list_remove_if(&temp->next, data_ref, cmp);
	}
}
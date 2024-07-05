/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_list.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mranaivo <mranaivo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/05 15:02:00 by mranaivo          #+#    #+#             */
/*   Updated: 2024/07/05 15:10:51 by mranaivo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

typedef struct s_list
{
	int        data;
    struct s_list    *next;
}				t_list;

t_list    ft_sort_list(t_list *begin_list, int (*cmp)(int, int))
{
	t_list    *enrg;
	int tmp;

	enrg = begin_list;
	while (begin_list)
	{
		if (cmp(begin_list->data, begin_list->next->data))
		{
			tmp = begin_list->data;
            begin_list->data = begin_list->next->data;
            begin_list->next->data = tmp;
			begin_list = enrg;
		}
		else
			begin_list = begin_list->next;
	}
	begin_list = enrg;
	return (begin_list);
}
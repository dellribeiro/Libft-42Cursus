/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: whendrix <whendrix@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/05 03:05:45 by whendrix          #+#    #+#             */
/*   Updated: 2022/07/05 20:41:30 by whendrix         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*save;

	if (!lst || !del)
		return ;
	while(*lst != NULL)
	{
		save = (*lst)->next;
		ft_lstdelone(*lst, del);
		(*lst) = save;
	}
}

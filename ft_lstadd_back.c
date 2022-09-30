/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: whendrix <whendrix@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/05 03:03:28 by whendrix          #+#    #+#             */
/*   Updated: 2022/07/05 20:41:27 by whendrix         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*save;
	if (!lst || !new)
		return ; 
	if (!*lst)
	{
		*lst = new;
		return ;
	}
	save = ft_lstlast(*lst);
	save->next = new;
}

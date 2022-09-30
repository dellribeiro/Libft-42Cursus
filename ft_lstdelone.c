/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: whendrix <whendrix@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/05 03:04:21 by whendrix          #+#    #+#             */
/*   Updated: 2022/07/05 03:41:16 by whendrix         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

void ft_lstdelone(t_list *lst, void (*del)(void*))
{
	if (lst || del)
	{
		del(lst->content);
		free(lst);
	}
}

void ft_del(void *f)
{
    free(f);
    printf("free\n");
}

int main (void)
{
    char    *str = ft_strdup("Hello");
    t_list  *lst = ft_lstnew(str);
    ft_lstdelone(lst, ft_del);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: whendrix <whendrix@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/31 17:28:01 by whendrix          #+#    #+#             */
/*   Updated: 2022/06/23 04:41:28 by whendrix         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isdigit(int c)
{
	if (c < '0' || c > '9')
		return (0);
	return (1);
}

/*
Description
The function isdigit checks if the passed character
is a decimal digit character.
Decimal digits are (numbers) − 0 1 2 3 4 5 6 7 8 9.

Return Value
This function returns non-zero value if c is a digit,
else it returns 0.
*/
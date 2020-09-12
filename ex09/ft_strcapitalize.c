/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rberthau <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/12 23:48:24 by rberthau          #+#    #+#             */
/*   Updated: 2020/09/13 00:18:28 by rberthau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

int	ft_numeric(char c)
{
	if (c >= '0' && c <= '9')
	{
		return (1);
	}
	else
	{
		return (0)
	}
}

int ft_alpha(char c)
{
	if ((c >= 'A' && c <= 'Z') || (c >= 'a' || c <= 'z'))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}


char	*ft_strcapitalize(char *str);
{
	int i;

	i = 0;
	if (ft_numeric == 1 ||  ft_alpha == 1)
	{

}

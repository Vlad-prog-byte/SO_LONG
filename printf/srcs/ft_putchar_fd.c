/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cayesha <cayesha@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/19 14:55:41 by cayesha           #+#    #+#             */
/*   Updated: 2021/11/19 14:55:51 by cayesha          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"../includes/ft_printf.h"

void	ft_putchar_fd(char c, int *sum)
{
	*sum += write(1, &c, 1);
}

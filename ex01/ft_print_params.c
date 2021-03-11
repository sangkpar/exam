/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sangkpar <sangkpar@student.42.kr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/09 13:59:56 by sangkpar          #+#    #+#             */
/*   Updated: 2021/03/11 18:02:17 by sangkpar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(char *str)
{
	while (*str)
	{
		write(1, str, 1);
		str++;
	}
}

int		main(int argc, char *argv[])
{
	int		i;

	i = 1;
	while (i < argc)
	{
		ft_putstr(argv[i]);
		write(1, "\n", 1);
		i++;
	}
	return (0);
}

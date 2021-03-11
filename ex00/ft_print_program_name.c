/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_program_name.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sangkpar <sangkpar@student.42.kr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/09 13:23:53 by sangkpar          #+#    #+#             */
/*   Updated: 2021/03/11 17:51:28 by sangkpar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(char *str)
{
	while (*str != '\0')
	{
		write(1, str, 1);
		str++;
	}
}

int		main(int argc, char *argv[])
{
	argc = 0;
	ft_putstr(argv[0]);
	write(1, "\n", 1);
	return (0);
}

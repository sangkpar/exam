/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sangkpar <sangkpar@student.42.kr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/09 14:12:44 by sangkpar          #+#    #+#             */
/*   Updated: 2021/03/11 21:29:59 by sangkpar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		ft_strcmp(char *s1, char *s2)
{
	while (*s1 && *s2)
	{
		if (*s1 != *s2)
			return (*s1 - *s2);
		++s1;
		++s2;
	}
	return (*s1 - *s2);
}

void	ft_sort(int argc, char *argv[])
{
	int		i;
	int		j;
	char	*tmp;

	i = 1;
	while (i < argc)
	{
		j = 1;
		while (j < argc - 1)
		{
			if (ft_strcmp(argv[j + 1], argv[j]) < 0)
			{
				tmp = argv[j + 1];
				argv[j + 1] = argv[j];
				argv[j] = tmp;
			}
			++j;
		}
		i++;
	}
}

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

	ft_sort(argc, argv);
	i = 1;
	while (i < argc)
	{
		ft_putstr(argv[i]);
		write(1, "\n", 1);
		i++;
	}
	return (0);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emilgarc <emilgarc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/26 12:29:37 by acarro-v          #+#    #+#             */
/*   Updated: 2025/08/05 16:56:13 by emilgarc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../minishell.h"

int	ft_error(char *message)
{
	printf("%s\n", message);
	exit(1);
}

int		envpath_error(char *old, char *message)
{
	printf(message);
	free(old);
	return (1);
}

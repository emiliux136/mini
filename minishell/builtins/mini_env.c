/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mini_env.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emilgarc <emilgarc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/05 12:59:27 by emilgarc          #+#    #+#             */
/*   Updated: 2025/08/07 16:01:33 by emilgarc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../minishell.h"

// Function to print all environment variables
int	run_env(t_mini *mini, t_command *cmd)
{
	t_env_dict	*current;
	int			arg_count;

	arg_count = count_args(cmd->command_name);
	if (arg_count > 1)
	{
		ft_putstr_fd("env: Must not have options or arguments\n", 2);
		return (1);
	}
	current = mini->env_dict;
	while (current)
	{
		if (current->value)
			printf("%s=%s\n", current->key, current->value);
		else
			printf("%s=\n", current->key);
		current = current->next;
	}
	return (0);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   btsp_charoua.h                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: charoua <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/02 00:46:57 by charoua           #+#    #+#             */
/*   Updated: 2020/06/02 00:47:42 by charoua          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BTSP_CHAROUA_H
# define BTSP_CHAROUA_H

# include <stdlib.h>
# include <unistd.h>

void	ft_putstr(char *str);
char	*ft_write_soluce(char line, char column, char *result);
void	ft_free(char **blocked);
void	ft_write_blocked(int i, char **blocked);

#endif

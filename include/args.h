/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   args.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abaisago <adam_bai@protonmail.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/13 17:29:20 by abaisago          #+#    #+#             */
/*   Updated: 2019/03/18 15:25:24 by abaisago         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARGS_H
# define ARGS_H
# include <stdarg.h>

int		switch_number_star(va_list ap, t_spec *spec, char **str);
void	get_arg(va_list og, va_list ap, char **str);

/*
** ARGS_H
*/
#endif

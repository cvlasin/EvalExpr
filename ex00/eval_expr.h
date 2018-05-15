/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   evalexpr.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cvlasin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/24 15:52:04 by cvlasin           #+#    #+#             */
/*   Updated: 2017/09/24 21:56:38 by cvlasin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EVAL_EXPR_H
# define EVAL_EXPR_H

# include <unistd.h>

void	ft_putchar(char c);
void	ft_putnbr(int nb);
void	clear(char *str);
long	operatie_prin(char **p);
long	operatie_sec(char **p);
long	number(char **p);
int		eval_expr(char *str);

#endif

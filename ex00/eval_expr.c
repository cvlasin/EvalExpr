/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   eval_expr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cvlasin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/24 19:19:21 by cvlasin           #+#    #+#             */
/*   Updated: 2017/09/24 21:57:27 by cvlasin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "eval_expr.h"

long	operatie_sec(char **p)
{
	long r;

	clear((*p));
	r = operatie_prin(p);
	while (*(*p) == '+' || *(*p) == '-')
	{
		if (*(*p) == '+')
		{
			(*p)++;
			r += operatie_prin(p);
		}
		else
		{
			(*p)++;
			r -= operatie_prin((p));
		}
	}
	return (r);
}

int		eval_expr(char *str)
{
	return (operatie_sec(&str));
}

long	operatie_prin(char **p)
{
	long r;

	r = number(p);
	while (*(*p) == '*' || *(*p) == '/' || *(*p) == '%')
	{
		if (*(*p) == '*')
		{
			(*p)++;
			r *= number(p);
		}
		if (*(*p) == '/')
		{
			(*p)++;
			r /= number(p);
		}
		if (*(*p) == '%')
		{
			(*p)++;
			r %= number(p);
		}
	}
	return (r);
}

long	number(char **p)
{
	long r;

	r = 0;
	if (*(*p) == '(')
	{
		(*p)++;
		r = operatie_sec(p);
		(*p)++;
	}
	else
	{
		while (*(*p) >= '0' && *(*p) <= '9')
		{
			r = r * 10 + *(*p) - '0';
			(*p)++;
		}
	}
	return (r);
}

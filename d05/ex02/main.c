/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlewis-l <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/19 20:46:42 by mlewis-l          #+#    #+#             */
/*   Updated: 2018/03/20 21:43:59 by mlewis-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

int main()
	{
    char str[] = "88888888";
    int *val = ft_atoi(str);
    printf ("%d ", val);
    return 0;
	}

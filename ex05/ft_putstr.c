/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: damangue <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/12 13:34:09 by damangue          #+#    #+#             */
/*   Updated: 2020/07/12 14:06:43 by damangue         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include<unistd.h>
#include<stdlib.h>

void ft_putchar(char c )
{
	write(1,&c,1);
}



void ft_putstr(char *str)
{


	 int counter=0;

	 while(str[counter] !='\0')

	 {
		ft_putchar(str[counter]);
		counter++;
	 }
}



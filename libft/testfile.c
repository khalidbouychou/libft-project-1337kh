/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   testfile.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: khbouych <khbouych@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/16 14:44:32 by khbouych          #+#    #+#             */
/*   Updated: 2022/10/16 14:56:29 by khbouych         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <stdio.h>

static void    sum(int a , int b)
{
    printf("sum ==> %d\n",a + b);
}
static void    sub(int a , int b)
{
    printf("sub ==> %d\n",a - b);
}
void    display(void (*f)(int,int))
{
    (*f)(5,2);
}

int  main()
{
    display(sum);
    display(sub);
}
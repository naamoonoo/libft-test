/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_same.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hnam <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/17 10:40:34 by hnam              #+#    #+#             */
/*   Updated: 2019/02/17 10:40:36 by hnam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_is_same(char *haystack, const char *needle)
{
    unsigned int i;
    unsigned int ans;

    i = -1;
    ans = 0;
    while (needle[++i])
        if (haystack[i] == needle[i])
            ans++;
    return (i == ans);
}

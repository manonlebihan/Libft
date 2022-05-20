/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: manonlebihan <manonlebihan@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/20 14:12:38 by manonlebiha       #+#    #+#             */
/*   Updated: 2022/05/20 17:09:32 by manonlebiha      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*p1;
	unsigned char	*p2;
	size_t			i;

	p1 = (unsigned char *)s1;
	p2 = (unsigned char *)s2;
	i = 0;
	if (s1 == s2)
		return (0);
	while (n > 0)
	{
		if (*p1 > *p2)
			return (p2 - p1);
		else if (*p2 > *p1)
			return (p1 - p2);
		n--;
		p1++;
		p2++;
	}
	return (0);
}

int	main(void)
{
	int	ret = 0;

	printf("Si s1 et s2 sont égales\n");
	ret = ft_memcmp("abc", "abc", 2);
	printf("ret = %d\n", ret);
	printf("Si s1 est supérieure à s2\n");
	ret = ft_memcmp("bca", "abc", 2);
	printf("ret = %d\n", ret);
	printf("Si s1 est inférieure à s2\n");
	ret = ft_memcmp("abc", "bca", 2);
	printf("ret = %d\n", ret);
	return (0);
}

#include <stdio.h>
int my_memcmp(const void *s1, const void *s2, int len)
{
    unsigned char *p = (unsigned char *)s1;
    unsigned char *q = (unsigned char *)s2;
    int charCompareStatus = 0;
    //If both pointer pointing same memory block
    if (s1 == s2)
    {
        return charCompareStatus;
    }
    while (len > 0)
    {
        if (*p != *q)
        {
            //compare the mismatching character
            charCompareStatus = (*p >*q)?1:-1;
            break;
        }
        len--;
        p++;
        q++;
    }
    return charCompareStatus;
}
int main()
{
    int ret = 0;
    //If s1 and s2 equal
    ret = my_memcmp("abc","abc",2);
    printf("ret = %d\n",ret);
    //if first char of s1 is large to s2
    ret = my_memcmp("bca","abc",2);
    printf("ret = %d\n",ret);
    //if first char of s1 is small to s2
    ret = my_memcmp("abc","bca",2);
    printf("ret = %d\n",ret);
    return 0;
}
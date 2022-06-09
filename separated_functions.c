#include <stdlib.h>
#include <stdio.h>
#include "libft.h"

int	ft_count_word(const char *s, char c)
{
	int	i;
	int	word_count;

	i = 0;
	word_count = 1;
	if (s[0] == '\0')
		return (0);
	while (s[i])
	{
		if (s[i] == c)
			word_count++;
		i++;
	}
	return (word_count);
}

int	main(void)
{
	char	*s;
	char	c;
	int		res;

	s = "bonjour les ogres de l'orient";
	c = 'o';
	res = ft_count_word(s, c);
	printf("%d\n", res);
}

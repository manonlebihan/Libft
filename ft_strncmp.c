
int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	index;

	index = 0;
	while (index < n && (s1[index] != '\0' || s2[index] != '\0'))
	{
		if (s1[index] != s2[index])
			return (s1[index] - s2[index]);
		index++;
	}
	return (0);
}

/*#include <stdio.h>
#include <string.h>
int	main (void)
{
	char 	str1[] = "victor", str2[] = "manon";
	int		result, result2;
	result = ft_strncmp(str1, str2, 5);
	result2 = strncmp(str1, str2, 5);
	printf("ft_strncmp(str1, str2) = %d\n", result);
	printf("strncmp(str1, str2) = %d\n", result2);
	return (0);
}*/

#include "libft.h"

char	*ft_strcat(char *s1, const char *s2)
{
	size_t i;

	i = ft_strlen(s1);
	while ((s1[i] = *s2++))
		i++;
	return (s1);
}

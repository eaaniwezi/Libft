
#include "libft.h"

char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
	char	*result;
	size_t	i;

	i = 0;
	if (!s || start + len > ft_strlen(s))
		return (NULL);
	if ((result = ft_strnew(len)))
	{
		while (len)
		{
			result[i++] = s[start++];
			len--;
		}
		result[i] = '\0';
	}
	return (result);
}

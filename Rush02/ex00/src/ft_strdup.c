#include "ft.h"

char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

char	*ft_strdup(char *src)
{
	char	*dup;
	int		srclen;

	srclen = ft_strlen(src);
	dup = (char *)malloc(sizeof(char) * srclen + 1);
	return (ft_strcpy(dup, src));
}

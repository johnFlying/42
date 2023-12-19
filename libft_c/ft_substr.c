#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char *sub;
	size_t	stop;
	int	n;

	n = 0;
	stop = start + len;
	sub = (char*) malloc ((len + 1) *sizeof(char));
	if(!sub)
		return (NULL);
	while(s[start] && start < stop)
	{
		sub[n++] = s[start];
		start++;
	}
	sub[++start] = '\0';
	return (sub);
}





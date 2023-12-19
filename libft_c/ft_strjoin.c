//#include "libft.h"
#include <stdlib.h>
#include <stddef.h>

char	*ft_strjoin(char const *s1, char const *s2)
{
	int	n;
	int	n1;
	int	n2;
	char	*sj;

	n1 = 0;
	n2 = 0;
	while(s1[n1])
		n1++;
	while(s2[n2])
		n2++;
	sj = (char*) malloc ((n1 + n2 + 1) * sizeof(char));
	if (!sj)
		return (NULL);
	n = 0;
	while (n < n1)
	{
		sj[n] = s1[n];
		n++;
	}
	while((n - n1) < n2)
	{
		sj[n] = s2[n - n1];
		n++;
	}
	sj[++n] = '\0';
	return (sj);
}

#include <stdio.h>
int main ()
{
	char *s1 = " cagotte";
	char *s2 = "culotte";

	printf("%s\n", ft_strjoin(s2, s1));
}
			

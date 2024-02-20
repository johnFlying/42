#include "f_simple.h"
#include <unistd.h>

int	f_percent(void)
{
	return ((int)write(1, "%", 1));
}

int	f_char(char c)
{
	return ((int)write(1, &c, 1));
}

int	f_string(char *str)
{
	int	ret;

	if (!str)
		return ((int) write(1, "(null)", 6));
	ret = 0;
	while (str && *str)
		ret += write(1, (str++), 1);
	return (ret);
}

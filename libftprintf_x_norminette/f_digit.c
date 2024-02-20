#include "f_digit.h"
#include "f_simple.h"
#include <unistd.h>

int	f_digit(long long n, int base)
{
	int		count;
	char	*symbols;

	symbols = "0123456789abcdef";
	if (n < 0)
	{
		write(1, "-", 1);
		return (f_digit(-n, base) + 1);
	}
	else if (n < base)
		return (f_char(symbols[n]));
	else
	{
		count = f_digit(n / base, base);
		return (count + f_digit(n % base, base));
	}
}

int	f_digit_upp(long long n, int base)

{
	int		count;
	char	*symbols;

	symbols = "0123456789ABCDEF";
	if (n < 0)
	{
		write(1, "-", 1);
		return (f_digit_upp(-n, base) + 1);
	}
	else if (n < base)
		return (f_char(symbols[n]));
	else
	{
		count = f_digit_upp(n / base, base);
		return (count + f_digit_upp(n % base, base));
	}
}

int	f_pointers( unsigned long long n, int base)
{
	int	count;

	write(1, "0x", 2);
	count = f_digit(n / base, base) + 2;
	return (count + f_digit(n % base, base));
}
/*
int f_undigit (unsigned int n, int base)
{
  int		count;
  char	*symbols;
  symbols = "0123456789";
  count = 1;
  if (n < base)
    return f_char(symbols[n]);
  else
  {
    count = f_undigit(n / base, base);
    return (count + f_undigit(n % base, base)) ;
  }
}*/

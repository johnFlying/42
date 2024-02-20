#include "ft_printf.h"
#include "f_simple.h"
#include "f_digit.h"
#include <unistd.h>

/*
    Scorro dentro 's'
        se il carattere è != %
            stampo il carattere
        altrimenti
            gestione del formato --> salvare il valore di ritorno
*/
int	ft_printf(const char *s, ...)
{
	int		i;
	int		ret;
	va_list	arg;

	va_start(arg, s);
	ret = 0;
	i = 0;
	while (s[i])
	{
		if (s[i] != '%')
			ret += (int)write(1, &s[i], 1);
		else
			ret += sort_format(s[++i], &arg);
		++i;
	}
	va_end(arg);
	return (ret);
}

/*
    Leggere 'c'
        se 'c' è == % --> chiama funzione stampa asterisco
        se 'c' è == 'd' o 'i' --> chiama funzione interi
        se 'c' è == 'u' --> chiama funzione unsigned
        se 'c' è == 'x' o 'X' --> chiama funzione hexadecimal
        se 'c' è == 'c' --> chiama funzione carattere
        se 'c' è == 's' --> chiama funzione stringa
        se 'c' è == 'p' --> chiama funzione puntatore
*/
int	sort_format(char c, va_list *arg)
{
	if (c == '%')
		return (f_percent());
	if (c == 'c')
		return (f_char(va_arg(*arg, int)));
	if (c == 's')
		return (f_string(va_arg(*arg, char *)));
	if (c == 'd' || c == 'i')
		return (f_digit((long long)(va_arg(*arg, int)), 10));
	if (c == 'x')
		return (f_digit((long)(va_arg(*arg, int)), 16));
	if (c == 'X')
		return (f_digit_upp((long)(va_arg(*arg, int)), 16));
	if (c == 'p')
		return (f_pointers(va_arg(*arg, unsigned long long), 16));
	if (c == 'u')
		return (f_digit((va_arg(*arg, unsigned int)), 10));
	return (-1);
}

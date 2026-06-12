// O que faz: Vasculha os primeiros n bytes do bloco de memória s procurando pela primeira ocorrência do caractere c (tratado como unsigned char). Retorna um ponteiro para o byte encontrado ou um ponteiro nulo (0/NULL) se não achar nada.

// O que resolve: Assim como o memcpy é a versão "bruta" do strcpy, o memchr é a versão "bruta" do strchr. Ele resolve a necessidade de procurar um byte específico em dados binários ou blocos de memória que contenham zeros no meio, ignorando as regras convencionais de strings.
#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char *ptr_str;
	size_t	i;

	ptr_str = (unsigned char *)s;
	i = 0;
	while (i < n)
	{
		if (ptr_str[i] == (unsigned char)c)
		{
			return ((void *)&ptr_str[i]);
		}
		i++;
	}
	return (NULL);
}

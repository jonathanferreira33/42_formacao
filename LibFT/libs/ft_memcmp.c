//O que faz: Compara byte a byte (tratados como unsigned char) os primeiros n bytes das áreas
// de memória s1 e s2. Retorna 0 se forem idênticas, um valor menor que zero se o primeiro byte
// diferente em s1 for menor que o de s2, ou maior que zero se for maior.

//O que resolve: É a versão de memória do strncmp. Permite comparar blocos de dados não-textuais
// (como duas structs para ver se seus conteúdos são exatos) de forma rápida e segura, olhando
//para o valor numérico dos bytes na memória.
#include "libft.h"

int		ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char *p_s1;
	unsigned char *p_s2;
	size_t	i;

	p_s1 = (unsigned char *) s1;
	p_s2 = (unsigned char *) s2;
	i = 0;
	while (i < n)
	{
		if (p_s1[i] != p_s2[i])
		{
			return (p_s1[i] - p_s2[i]);
		}
		i++;
	}
	return (0);
}
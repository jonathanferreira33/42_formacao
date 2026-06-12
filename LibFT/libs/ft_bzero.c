//Aviso de Padrão: Não faz parte do padrão C. Ela era uma função do padrão POSIX antigo, mas foi marcada como depreciada e posteriormente removida das especificações modernas.

//O que faz: Exatamente a mesma coisa que o memset(s, 0, n). Ela simplesmente preenche os primeiros n bytes do endereço s com zeros (\0).

//O que resolve: Era usada para limpar a memória de forma rápida. Hoje em dia, existe apenas por motivos de compatibilidade com sistemas muito antigos (ou em projetos acadêmicos, como a libft, por razões históricas). A recomendação universal atual é usar o memset.

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	unsigned char	*p;
    size_t			i;

	p = (unsigned char *)s;
	i = 0;
	while (i < n)
	{
		p[i] = 0;
		i++;
	}
}

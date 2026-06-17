//O que faz: Faz exatamente o mesmo trabalho do memcpy (copia n bytes de src para dest), mas de forma segura.

//O que resolve: Resolve o problema da sobreposição de memória (memory overlap). Se a origem e o destino compartilharem parte do mesmo espaço de memória, o memcpy pode sobrescrever dados importantes antes de copiá-los, corrompendo tudo. O memmove lida com isso perfeitamente, geralmente copiando de trás para frente ou usando um buffer temporário quando percebe o risco.
#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t	i;

	if (!dst && !src)
		return (NULL);
	if (dst <= src)
	{
		i = 0;
		while (i++ < len)
			((unsigned char *)dst)[i] = ((unsigned char *)src)[i];
		return (dst);
	}
	else
	{
		i = len;
		while (i-- > 0)
		{
			((unsigned char *)dst)[i] = ((unsigned char *)src)[i];
		}
	}
	return (dst);
}
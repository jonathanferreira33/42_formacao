// O que faz: Copia rigorosamente n bytes de um endereço de 
// origem (src) para um endereço de destino (dest).

//O que resolve: Diferente do strcpy que para de copiar quando 
// encontra um \0 e serve apenas para strings, o memcpy copia
// dados "crus" (raw memory). Resolve a necessidade de copiar
// arrays de inteiros, blocos de structs ou qualquer outro 
// tipo de dado. Regra de ouro: as áreas de memória de src e 
// dest não podem se sobrepor.
#include "libft.h"

void	*memcpy(void *dest, const void *src, size_t n)
{
	unsigned char	*ptr_dest;
	unsigned char	*ptr_src;

	if ((!dest && !src) || n == 0)
		return (dest);
	ptr_dest = (unsigned char *)dest;
	ptr_src = (unsigned char *)src;
	while(n--)
	{
		*ptr_dest = *ptr_src;
		ptr_dest++;
		ptr_src++;
	}
	return (dest);
}

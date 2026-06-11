// O que faz: Aloca espaço na memória para um array contendo nmemb elementos,
// onde cada elemento tem o tamanho de size bytes. O diferencial dela é que,
// logo após alocar, ela preenche todos os bytes desse espaço com o valor zero (0).

// O que resolve: Resolve o problema do "lixo de memória". Quando você usa a
// função malloc, a memória alocada vem com dados residuais de processos anteriores.
// O calloc garante que você receba um bloco de memória totalmente limpo e zerado,
// prevenindo bugs de variáveis não inicializadas.
#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	size_t			total_size;
	void			*ptr;
	unsigned char	*byte_ptr;
	size_t			i;

	if (nmemb == 0 || size == 0)
		return (malloc(0));
	if (nmemb > ((size_t)-1 / size))
		return (NULL);
	total_size = nmemb * size;
	ptr = malloc(total_size);
	if (ptr == NULL)
		return (NULL);
	byte_ptr = (unsigned char *)ptr;
	i = 0;
	while (i < total_size)
	{
		byte_ptr[i] = 0;
		i++;
	}
	return (ptr);
}

// O que faz: Preenche os primeiros n bytes do bloco de memória
// apontado por s com o byte constante especificado em c
// (que é passado como int, mas convertido internamente para
// unsigned char).

// O que resolve: É a forma mais rápida e padronizada de
// inicializar ou resetar uma região inteira da memória com
// um valor específico de uma só vez (muito usado para limpar
// structs ou arrays inteiros com zeros ou espaços em branco).

// s = ponteiro para a regiao de memoria que sera preenchida
// c = valor usado para prencher a memoria, que será convertido para unsigned char
// n = numero de "bytes" que serão preenchidos. Não é necessariamente o tamanho do array


void	*memset(void *s, int c, unsigned int n)
{
	unsigned char	*ptr;
	unsigned char	value;
	unsigned int	count;

	ptr = (unsigned char *)s;
	value = (unsigned char)c;
	count = 0;
	while(count < n)
	{
		ptr[count] = value;
		count++;
	}
	return (s);
}

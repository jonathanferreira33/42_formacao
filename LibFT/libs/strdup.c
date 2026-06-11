// Aviso de Padrão: Historicamente, ela não faz parte do padrão C ISO original (C89/C99),
// pertencendo ao padrão POSIX. No entanto, ela foi oficialmente adicionada ao C no padrão mais
// recente (C23).

// O que faz: Cria uma duplicata exata da string s passada como parâmetro. Ela descobre o
// tamanho da string, aloca a memória necessária dinamicamente (usando malloc por baixo dos panos)
// e copia o conteúdo.

// O que resolve: Resolve a repetição de código. Sem ela, você sempre teria que fazer um strlen
// para descobrir o tamanho, um malloc(tamanho + 1) para alocar espaço, e um strcpy para copiar.
// A strdup faz tudo isso em uma única chamada.
char	*strdup(const char *s)
{
	int		i;
	int		len;
	char	*dupped;

	len = 0;
	while (s[len] != '\0')
		len++;
	dupped = malloc(sizeof(char) * (len + 1));
	if (!dupped)
		return (0);
	i = 0;
	while (i < len)
	{
		dupped[i] = s[i];
		i++;
	}
	dupped[i] = '\0';
	return (dupped);
}
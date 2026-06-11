// O que faz: Aloca espaço na memória para um array contendo nmemb elementos,
// onde cada elemento tem o tamanho de size bytes. O diferencial dela é que,
// logo após alocar, ela preenche todos os bytes desse espaço com o valor zero (0).

// O que resolve: Resolve o problema do "lixo de memória". Quando você usa a
// função malloc, a memória alocada vem com dados residuais de processos anteriores.
// O calloc garante que você receba um bloco de memória totalmente limpo e zerado,
// prevenindo bugs de variáveis não inicializadas.
#include <stdio.h>

// Função para esperar o usuário pressionar ENTER
void esperarEnter() {
    printf("\nPressione ENTER para continuar...");
    while (getchar() != '\n');
}

// Função para imprimir o array
void imprimirArray(int arr[], int tamanho) {
    for (int i = 0; i < tamanho; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

// Busca linear
// Retorna a posição do valor encontrado ou -1 se não encontrado
int buscaLinear(int arr[], int tamanho, int valor) {
    for (int i = 0; i < tamanho; i++) {
        if (arr[i] == valor) {
            return i;
        }
    }
    return -1;
}

// Ordenação Bubble Sort
void bubbleSort(int arr[], int tamanho) {
    for (int i = 0; i < tamanho - 1; i++) {
        for (int j = 0; j < tamanho - 1 - i; j++) {
            if (arr[j] > arr[j + 1]) {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

// Busca binária
// Requer que o array esteja ordenado
int buscaBinaria(int arr[], int tamanho, int valor) {
    int inicio = 0, fim = tamanho - 1;
    while (inicio <= fim) {
        int meio = (inicio + fim) / 2;
        if (arr[meio] == valor)
            return meio;
        else if (arr[meio] < valor)
            inicio = meio + 1;
        else
            fim = meio - 1;
    }
    return -1;
}

int main() {
    int numeros[] = {88, 42, 17, 95, 23, 56, 71, 3, 39, 64};
    int tamanho = 10;
    int modo;

    printf("========================================\n");
    printf("  Bem-vindo!\n");
    printf("  Autor: Pedro Eduardo\n");
    printf("========================================\n\n");

    printf("Escolha o modo de execucao:\n");
    printf("1 - Passo a passo (pressione ENTER a cada etapa).\n");
    printf("0 - Executar tudo de uma vez\n");
    printf("Digite sua escolha: ");
    scanf("%d", &modo);
    getchar(); // Limpa o buffer do scanf

    // Mostrar array original
    printf("\nArray original:\n");
    imprimirArray(numeros, tamanho);
    if (modo == 1) esperarEnter();

    // Busca linear
    printf("\nExecutando busca linear para o numero 23...\n");
    int posLinear = buscaLinear(numeros, tamanho, 23);
    if (posLinear != -1)
        printf("Numero 23 encontrado na posicao %d (busca linear).\n", posLinear);
    else
        printf("Numero 23 nao encontrado (busca linear).\n");
    if (modo == 1) esperarEnter();

    // Ordenação
    printf("\nOrdenando o array com Bubble Sort...\n");
    bubbleSort(numeros, tamanho);
    printf("Array ordenado com sucesso!\n");
    printf("\nArray ordenado:\n");
    imprimirArray(numeros, tamanho);
    if (modo == 1) esperarEnter();

    // Busca binária
    printf("\nExecutando busca binaria para o numero 23...\n");
    int posBinaria = buscaBinaria(numeros, tamanho, 23);
    if (posBinaria != -1)
        printf("Numero 23 encontrado na posicao %d (busca binaria).\n", posBinaria);
    else
        printf("Numero 23 nao encontrado (busca binaria).\n");

    printf("\nPrograma finalizado com sucesso!\n");
    printf("========================================\n");

    return 0;
}


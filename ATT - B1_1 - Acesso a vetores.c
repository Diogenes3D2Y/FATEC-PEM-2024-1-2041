#include <stdio.h>

#define MAX_NOTAS 10

// Função para ordenar as notas em ordem crescente
void ordenarNotas(float notas[], int n) {
    int i, j;
    float temp;
    for (i = 0; i < n - 1; i++) {
        for (j = 0; j < n - i - 1; j++) {
            if (notas[j] > notas[j + 1]) {
                temp = notas[j];
                notas[j] = notas[j + 1];
                notas[j + 1] = temp;
            }
        }
    }
}

// Função para calcular a nota final excluindo a maior e a menor nota
float calcularNotaFinal(float notas[], int n) {
    ordenarNotas(notas, n);
    float soma = 0;
    for (int i = 1; i < n - 1; i++) {
        soma += notas[i];
    }
    return soma;
}

int main() {
    int n;
    while (1) {
        scanf("%d", &n);
        if (n == 0)
            break;

        float notas[MAX_NOTAS];
        for (int i = 0; i < n; i++) {
            scanf("%f", &notas[i]);
        }

        float nota_final = calcularNotaFinal(notas, n);
        printf("Nota final do candidato = %.2f\n", nota_final);
    }
    return 0;
}



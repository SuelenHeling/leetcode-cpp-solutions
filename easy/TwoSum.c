//Dado um array de inteiros nums e um número inteiro target‚retorno índices dos dois números tais que somam target.

//Você pode supor que cada entrada teria exatamente uma solução, e você não pode usar o mesmo elemento duas vezes.

//Pode retornar a resposta em qualquer ordem.

#include <stdio.h>
int main () {
    int nums[100];
    int tamanho;
    
    printf("Quantos numeros? ");
    scanf("%d", &tamanho);

    printf("Digite uma sequencia de numeros inteiros: ");

    for (int i = 0; i < tamanho; i++) {
        scanf("%d", &nums[i]);
    }
    int target;
    printf("Digite o target: ");
    scanf("%d", &target);

    for (int i = 0; i < tamanho; i++) {
        for (int j = i + 1; j < tamanho; j++) {
            if (nums[i] + nums[j] == target) {
                printf("Indices: %d e %d\n", i, j);
            }
        }
    }
}
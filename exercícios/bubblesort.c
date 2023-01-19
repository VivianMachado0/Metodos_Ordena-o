/*Explique como seria possível melhorar o método bubblesort, armazenando não apenas a
informação da troca, mas também a posição do vetor onde ocorreu a troca. Implemente essa
modificação */
//Vivian Machado Santos
#include <stdio.h>
#include <stdbool.h>

void bubbleSortM(int A[], int n) {
    int i,j;
    for ( i = 1; i < n; i++) {
        bool troca = 0;

        for ( j = n - 1; j >= i; j--) {
            if (A[j - 1] > A[j]) {
                int aux = A[j - 1];
                A[j - 1] = A[j];
                A[j] = aux;
                troca = 1;
            }
        }
        if (!troca) {
            return;
        }
    }
}

void printVetor(int A[], int size) {
    int i;
    for (i = 0; i < size; i++) {
        printf("%d ", A[i]);
    }
}

int main() {
 int max, i;

    printf("Digite o tamanho do vetor ");
    scanf ("%d",&max);

  int  vetor[max];

  for (i = 0; i < max; i++)
    {
        printf("Digite o %d numero ", i+1);
        scanf ("%d",&vetor[i]);
    }

 bubbleSortM(vetor, max);
  printVetor(vetor, max);

}

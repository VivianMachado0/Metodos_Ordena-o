//Implemente e teste o algoritmo shell Sort.
//Vivian Machado Santos
#include <stdio.h>
#include<stdlib.h>


void shellSort(int *vet, int max) {
    int i, j, value;

    int h = 1;
    while(h < max) {
        h = 3*h+1;
    }
    while (h > 0) {
        for(i = h; i < max; i++) {
            value = vet[i];
            j = i;
            while (j > h-1 && value <= vet[j - h]) {
                vet[j] = vet[j - h];
                j = j - h;
            }
            vet[j] = value;
        }
        h = h/3;
    }
    for (i = 0; i < max; i++)
    {
    printf ("%d ",vet[i]);//Imprime o vetor ordenado
    }
    printf ("\n");}

  int main () {
  int max, i;

    printf("Digite o tamanho do vetor ");
    scanf ("%d",&max);

  int  vetor[max];

  for (i = 0; i < max; i++)
    {
        printf("Digite o %d numero ", i+1);
        scanf ("%d",&vetor[i]);
    }

 shellSort(vetor, max);

}

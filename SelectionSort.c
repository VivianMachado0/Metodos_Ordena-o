//Implementar o algoritmo Selection Sort e ordenar um vetor utilizando-o.
//Vivian Machado Santos
#include <stdio.h>

void selection_sort (int vetor[],int max) {
  int i, j, min, aux;

  for (i = 0; i < (max - 1); i++) {//O minimo é o primeiro número não ordenado ainda
    min = i;
    for (j = i+1; j < max; j++) {//Caso tenha algum numero menor ele faz a troca do minimo
      if (vetor[j] < vetor[min]) {
    min = j;
      }
    }

    if (i != min) {// Se o minimo for diferente do primeiro numero não ordenado ele faz a troca para ordena-los
      aux = vetor[i];
      vetor[i] = vetor[min];
      vetor[min] = aux;
    }
  }

  for (i = 0; i < max; i++) {
    printf ("%d ",vetor[i]);//Imprime o vetor ordenado
  }
  printf ("\n");
}

main () {
  int max, i;
   printf("Digite o tamanho do vetor ");
  scanf ("%d",&max);

  int  vetor[max];

  for (i = 0; i < max; i++) {
    printf("Digite o %d numero ", i+1);
    scanf ("%d",&vetor[i]);
  }

  selection_sort (vetor, max);

}

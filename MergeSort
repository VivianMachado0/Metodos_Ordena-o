//Vivian Machado Santos
#include <stdio.h>
#include <stdlib.h>
void merge(int vetor[], int comeco, int meio, int fim) {
    int com1 = comeco, com2 = meio+1, comAux = 0, tam = fim-comeco+1;
    int *vetAux;
    vetAux = (int*)malloc(tam * sizeof(int));

    while(com1 <= meio && com2 <= fim){
        if(vetor[com1] < vetor[com2]) {
            vetAux[comAux] = vetor[com1];
            com1++;
        } else {
            vetAux[comAux] = vetor[com2];
            com2++;
        }
        comAux++;
    }
    while(com1 <= meio){  //Caso ainda haja elementos na primeira metade
        vetAux[comAux] = vetor[com1];
        comAux++;
        com1++;
    }
    while(com2 <= fim) { //Caso ainda haja elementos na segunda metade
        vetAux[comAux] = vetor[com2];
        comAux++;
        com2++;
    }
    for(comAux = comeco; comAux <= fim; comAux++){
        vetor[comAux] = vetAux[comAux-comeco];
    }

    free(vetAux);
}

void mergeSort(int vetor[], int comeco, int fim){
    int meio,i;
    if (comeco < fim) {
        int meio = (fim+comeco)/2;

        mergeSort(vetor, comeco, meio);
        mergeSort(vetor, meio+1, fim);
        merge(vetor, comeco, meio, fim);
    }

    for (i = 0; i < fim; i++) {
    printf ("%d ",vetor[i]);//Imprime o vetor ordenado
  }
  printf ("\n");

}
main () {
  int max, i , comeco=0;
  printf("Digite o tamanho do vetor ");
  scanf ("%d",&max);
  int  vetor[max];
  for (i = 0; i < max; i++)
  {
    printf("Digite o %d numero ", i+1);
    scanf (" %d",&vetor[i]);

  }
    mergeSort(vetor,comeco,max);
}

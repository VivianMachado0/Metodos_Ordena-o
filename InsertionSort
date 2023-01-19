//Implemente e teste o algoritmo Insertion Sort.
//Vivian Machado Santos
#include <stdio.h>
void insertionSort(int A[], int n){
    int i, key, j;
    for (i = 1; i < n; i++) {
        key = A[i];
        j = i - 1;//j representa o índice dos itens à esquerda a serem comparados
        while (j >= 0 && A[j] > key) {//enquanto a lista não estiver no começo ou a chave for menor que os elementos dos itens já ordenados
            A[j + 1] = A[j];//desloca elemento para a direita
            j = j - 1; //compara o próximo item à esquerda
        }
        A[j + 1] = key; //insere a chave em seu lugar correspondente(j + 1)
    }

      for (i = 0; i < n; i++) {
    printf ("%d ",A[i]);//Imprime o vetor ordenado
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

 insertionSort (vetor, max);

}

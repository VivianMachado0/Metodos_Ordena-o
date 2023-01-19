//Implemente e teste o algoritmo bubble Sort.
//Vivian Machado Santos
#include <stdio.h>
#include<stdlib.h>

void BubbleSort(int vetor[], int tam){
	int memoria, troca, i, j;
	troca=1; //A variável "troca" será a verificação da troca em cada passada

    for(j=tam-1; (j>=1) && (troca==1); j--)
    {
        troca=0; //Se o valor continuar 0 na próxima passada quer dizer que não houve troca e a função é encerrada.*/
        for(i=0; i<j; i++)
        {
            if(vetor[i]>vetor[i+1])
            {
                memoria=vetor[i];
                vetor[i]=vetor[i+1];
                vetor[i+1]=memoria;
                troca=1; //Se houve troca, "troca" recebe 1 para continuar rodando.*/
            }
        }
    }

    for (i = 0; i < tam; i++)
    {
    printf ("%d ",vetor[i]);//Imprime o vetor ordenado
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

 BubbleSort(vetor, max);

}

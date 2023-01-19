//Desenvolva um algoritmo que calcule e mostre o maior elemento de um vetor de tamanho
//N . Os elementos são números inteiros.

#include <stdio.h>
#include <math.h>

int main()
{
    int tam,i, maior = 0;

    printf("Digite o tamanho do vetor: \n");
    scanf ("%d",&tam);
    int vet[tam];


        for(i=0;i<tam;i++)
    {
        printf("Digite o %d numero: ",i+1);
        scanf("%d",&vet[i]);
          if(vet[i]>maior)
        {
        maior=vet[i];
        }
     }
       printf("o maior elemento do vetor e %d",maior);
}

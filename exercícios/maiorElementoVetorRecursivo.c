 //Desenvolva um algoritmo que calcule e mostre o maior elemento de um vetor de tamanho
//N . Os elementos são números inteiros.
//Agora com Recursividade

 #include <stdio.h>
 #include <stdlib.h>

 int maxVet(int *vet, int tam)
 {
    if (tam == 1)
    {
        return vet[0];
    }
    else
    {
        int aux;
        aux = maxVet(vet, tam-1);
            if (aux > vet[tam-1])
            {
                return aux;
            }
            else
            {
                return (vet[tam-1]);
            }
    }
 }
int main()
{

    int vet[20], i, max,tam;

    printf("Digite o tamanho do vetor: \n");
    scanf ("%d",&tam);

    for (i=0; i<tam; i++)
    {
        printf("Informe um valor inteiro %d: \n", i+1);
        scanf("%d", &vet[i]);
    }
 max = maxVet(vet, tam);
 printf("Maior: %d \n", max);
}

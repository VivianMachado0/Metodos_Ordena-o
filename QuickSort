//Implemente e teste o algoritmo Quick Sort.
//Vivian Machado Santos

#include <stdio.h>

void quick_sort(int *a, int antes, int depois){
    int i, j, pivo, y;

    i = antes;
    j = depois;
    pivo = a[(antes + depois) / 2];//a tem que ser ponteiro para levar a posição

    while(i <= j)
    {
        while(a[i] < pivo && i < depois)
        {
            i++;
        }
        while(a[j] > pivo && j > antes)
        {
            j--;
        }
        if(i <= j)
        {
            y = a[i];
            a[i] = a[j];
            a[j] = y;
            i++;
            j--;
        }
    }

    if(j > antes)
    {
        quick_sort(a, antes, j);
    }
    if(i < depois)
    {
        quick_sort(a, i, depois);
    }
}
int main(){
    int max, i;

    printf("Digite o tamanho do vetor ");
    scanf ("%d",&max);

    int  vetor[max];

    for (i = 0; i < max; i++)
    {
        printf("Digite o %d numero ", i+1);
        scanf ("%d",&vetor[i]);
    }

    quick_sort(vetor, 0, max - 1);

    for(i = 0; i < max; i++)
    {
        printf("%d ", vetor[i]);
    }
 return 0;
}

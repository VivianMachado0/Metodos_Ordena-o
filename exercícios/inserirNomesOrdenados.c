/* Faça um programa que leia n nomes inserindo-os em uma lista de forma ordenada
utilizando a idéia do algoritmo da inserção. No final, o programa deve mostrar todos os
nomes ordenados alfabeticamente.*/

#include <stdio.h>
#include <string.h>

int main(){
    char vetor[10][50], aux[50];
    int i, j,n;
	printf("Digite a quantidade de nomes para serem ordenados: \n");
  	scanf ("%d", &n); //Le o numero de nomes que o usuario vai digitar.
  	for (i = 0; i < n; i++)
    {
        printf("Digite o %d nome: ",i+1);
  	    scanf ("%s", &vetor[i]);
  	}

    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            if(strcmp(vetor[i], vetor[j])<0)
            {
                strcpy(aux, vetor[i]);
                strcpy(vetor[i], vetor[j]);
                strcpy(vetor[j], aux);
            }
        }
    }

    printf("Nomes ordenados: \n");
    for(i=0;i<n;i++)
    {
    printf(" %d: %s \n", i+1, vetor[i]);
    }

return(0);
}

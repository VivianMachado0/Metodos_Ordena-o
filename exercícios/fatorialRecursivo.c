 // Desenvolva uma função recursiva que calcule o fatorial de um número n.

 #include <math.h>
#include <stdio.h>
int main()
{
    int n, valor;

    printf("Digite o valor que deseja saber o fatorial \n");
    scanf("%d",&n);

    int fatorial(int n)
    {
        if(n>1)
        {
            return n * fatorial(n-1);
        }
        else
        {
            return n;
        }
    }

    valor = fatorial(n);
    printf("%d",valor);

}

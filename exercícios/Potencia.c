//Desenvolva um algoritmo que dado dois números, x e y, calcule a potência do primeiro pelo segundo
// (x^y). (obs. considere a não existência de uma função de exponenciação).
#include <math.h>
#include <stdio.h>

int potencia(int x, int y)//2,3
   {
       if(y!=1)//2!=1,1!=1,0!=1;
       {
         return (x * potencia(x,y-1));//2*(2,2)=4 // 4*(2,1) =8
       }
        else
       {
           return x;//=8
       }
   }
int main()
{
int x,y,n,valor;
  printf("Digite o valor do primeiro numero ");
  scanf("%d",&x);//2

  printf("Digite o valor do segundo numero ");
  scanf("%d",&y);//3


  valor = potencia(x,y); //=8
  printf("%d",valor);
}

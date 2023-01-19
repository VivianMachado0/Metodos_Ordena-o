//Um problema típico em ciência da computação consiste em converter um número da sua
//forma decimal para a forma binária. Faça uma função recursiva que converta um numero
//decimal em binário



#include <string.h>
#include <stdio.h>
#include <stdlib.h>


int decPbin(int n) {

    if (n < 2)
    {
        return n;
    }
return (10 * decPbin(n / 2)) + n % 2;
}
 void main()
 {
 int n, valor;

 printf("Digite o numero em Decimal: ");
 scanf("%d", &n);

 valor = decPbin(n);
 printf("Numero binario: %d", valor);
 }

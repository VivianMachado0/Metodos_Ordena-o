//Implementar o algoritmo heap Sort e ordenar um vetor utilizando-o.
//Vivian Machado Santos

#include <stdio.h>
void heapsort(int a[], int n) {
   int i , pai, filho, t;
   i = n/2;
   int true;

   while(true) {
      if (i > 0)
        {
          i--;
          t = a[i];
        }
      else
        {
          n--;
          if (n <= 0)
          return;
          t = a[n];
          a[n] = a[0];
        }
      pai = i;
      filho = i * 2 + 1;
      while (filho < n) {//fila
          if ((filho + 1 < n)  &&  (a[filho + 1] > a[filho]))
          {
                     filho++;
          }
          if (a[filho] > t)
          {
             a[pai] = a[filho];
             pai = filho;
             filho = pai * 2 + 1;
          }
          else
          {
             break;
          }
      }
      a[pai] = t;
   }
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

  heapsort (vetor, max);

     for(i = 0; i < max; i++)
    {
        printf(" %d ", vetor[i]);
    }

}

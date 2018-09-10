//Respota:
// O for do programa vai passar por todas as casas do vetor, em cada laço ele ira mostrar, na ordem:
//O valor do contador, o valor do Vetor naquela posição, o valor alocado no Ponteiro,
//o lugar da memoria onde esta apontado o valor do Vetor naquela posição,
//o lugar da memoria onde esta apontado o valor do Ponteiro naquela posição.



#include <stdio.h>

int main()
{
    float vet[5] = {1.1,2.2,3.3,4.4,5.5};
    float *f;
    int i;
    f = vet;
    printf("contador/valor/valor/endereco/endereco");
    for(i = 0 ; i <= 4 ; i++){
      printf("\ni = %d",i);
      printf("vet[%d] = %.1f",i, vet[i]);
      printf("*(f + %d) = %.1f",i, *(f+i));
      printf("&vet[%d] = %X",i, &vet[i]);
      printf("(f + %d) = %X",i, f+i);
    }
      return 0;
}

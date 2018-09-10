#include <stdio.h>
#include <stdlib.h>

void SomaVetores(int *Va, int *Vb, int *Vc, int n){
    int i;
    for(i = 0; i<n; i++){
        Vc[i] = Va[i] + Vb[i];
    }
};


int main()
{
  int *vetorA, *vetorB, *vetorC, n,i;

  printf("Digite o tamanho do Vetores: ");
  scanf("%d", &n);

  vetorA = (int*)malloc(n*sizeof(int));
  vetorB = (int*)malloc(n*sizeof(int));
  vetorC = (int*)malloc(n*sizeof(int));
  if(vetorA == NULL || vetorB == NULL || vetorC == NULL){
      printf("\n não foi possivel alocar \n" );
      exit(0);
  }
  printf("Valores do Primeiro Vetor: \n");
  for(i = 0; i<n; i++){
      scanf("%d", &vetorA[i]);
  }
  for(i = 0; i<n; i++){
      printf("%d, ", vetorA[i]);
  }
  printf("\n");
  printf("Valores do Segundo Vetor: \n");
  for(i = 0; i<n; i++){
      scanf("%d", &vetorB[i]);
  }
  printf("\n");
  for(i = 0; i<n; i++){
      printf("%d, ", vetorB[i]);
  }
  printf("\n");

  SomaVetores(vetorA, vetorB, vetorC, n);

  for(i = 0; i<n; i++){
      printf("%d, ", vetorC[i]);
  }
  free(vetorA);
  free(vetorB);
  free(vetorC);

  return 0;

}

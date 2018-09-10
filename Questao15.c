#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int compare (const void * a, const void * b)
{
  return ( *(int*)a - *(int*)b );
}
int main()
{
    int n, i;
    float *x;

    //Escolhe um valor para n
    printf("Escolha um valor para n: ");
    scanf("%d", &n);

    //Aloca na memoria
    x = (float*) malloc(n*sizeof(int));
    if(x == NULL){
        printf("nao foi possivel alocar\n");
        exit(0);
    }

    //Constroe o vetor x
    for(i = 0; i <n; i++){
        if(i%2 == 0){
            x[i] = (10.0*i);
        }
        else{
            x[i] = 10.0*(3.0*i);
        }
    }

    //Monstra o Vetor x
    printf("\n Vetor X: \n");
    for(i = 0; i < n; i++){
        printf("%f ", x[i]);
    }


    //Arruma o vetor X em forma crescente;
    qsort (x, n, sizeof(float), compare);

    //Monstra o vetor X em forma crescente
    printf("\n Vetor X crescente: \n");
    for(i = 0; i < n; i++){
        printf("%f ", x[i]);
    }

    //Libera o espaço na memoria de X
    free(x);
    return 0;
}

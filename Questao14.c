#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int n, i, j;
    float *x, aux;

    printf("Escolha um valor para n: ");
    scanf("%d", &n);
    x = (float*) malloc(n*sizeof(int));
    if(x == NULL){
        printf("nao foi possivel alocar\n");
        exit(0);
    }
    for(i = 0; i <n; i++){
        if(i%2 == 0){
            x[i] = (10.0*i);
        }
        else{
            x[i] = 10.0*(3.0*i);
        }
    }
    printf("\n Vetor X: \n");
    for(i = 0; i < n; i++){
        printf("%f ", x[i]);
    }
    for(i = 0; i<n; i++){
        for(j = (i+1); j<n; j++){
            if(x[j] < x[i]){
                aux = x[i];
                x[i] = x[j];
                x[j] = aux;
            }
        }
    }

    printf("\n Vetor X crescente: \n");
    for(i = 0; i < n; i++){
        printf("%f ", x[i]);
    }
    free(x);
    return 0;
}

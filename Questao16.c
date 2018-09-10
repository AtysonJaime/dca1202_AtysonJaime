
#include <stdio.h>

void mycomp(void* base, size_t num, size_t size,
            int (*compar)(const void*,const void*)){
    int i,j;
    float aux;
    for(i = 0; i<num; i++){
        for(j = (i+1); j<num; j++){
            if(compar(base[i], base[j]) == -1){
                aux = base[i];
                base[i] = base[j];
                base[j] = aux;
            }
        }
    }
};

int compareT (const void * a, const void * b){
  if ( *(float*)a <  *(float*)b ) return -1;
  if ( *(float*)a == *(float*)b ) return 0;
  if ( *(float*)a >  *(float*)b ) return 1;
};

int main()
{
    int n, i;
    float *x;

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

    mycomp(x, n, sizeof(float), compareT);

    printf("\n Vetor X crescente: \n");
    for(i = 0; i < n; i++){
        printf("%f ", x[i]);
    }
    free(x);
    return 0;
}

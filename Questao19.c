#include <stdio.h>
#include <stdlib.h>
#include <time.h>


void MultMatriz(int **A, int **B, int **C, int nlA, int ncA, int ncB){
    int i,j,f, aux;

    for(i = 0; i < nlA; i++){
        for(j = 0; j < ncB; j++){
            C[i][j] = 0;
            aux = 0;
            for(f=0; f< ncA; f++){
                aux = (A[i][f]*B[f][j]) + aux;
            }
            C[i][j] = aux;
        }
    }
};

int main()
{
    srand(time(0));

    int **Ma, **Mb, **Mc;
    int nlA,ncA,ncB,i,j;

    printf("Digite o tamanho de linhas da Matriz A: ");
    scanf("%d", &nlA);
    printf("\nDigite o tamanho de colunas da Matriz A/ linha da Matriz B: ");
    scanf("%d", &ncA);
    printf("\nDigite o tamanho de colunas da Matriz B: ");
    scanf("%d", &ncB);

    Ma = (int**)malloc(nlA*sizeof(int*));
    for(i = 0; i<nlA; i++){
        Ma[i] = (int*)malloc(ncA*sizeof(int));
    }
    Mb = (int**)malloc(ncA*sizeof(int*));
    for(i = 0; i<ncA; i++){
        Mb[i] = (int*)malloc(ncB*sizeof(int));
    }
    Mc = (int**)malloc(nlA*sizeof(int*));
    for(i = 0; i<nlA; i++){
        Mc[i] = (int*)malloc(ncB*sizeof(int));
    }

    for(i = 0; i < nlA; i++){
        for(j = 0; j < ncA; j++){
            Ma[i][j] = rand()%10;
        }
    }
    for(i = 0; i < ncA; i++){
        for(j = 0; j < ncB; j++){
            Mb[i][j] = rand()%10;
        }
    }

    MultMatriz(Ma, Mb, Mc, nlA, ncA, ncB);

    printf("\nMatriz A\n");
    for(i = 0; i < nlA; i++){
        for(j = 0; j < ncA; j++){
            printf("%d ", Ma[i][j]);
        }
        printf("\n");
    }
    printf("----------------------------------------------------");
    printf("\nMatriz B\n");
    for(i = 0; i < ncA; i++){
        for(j = 0; j < ncB; j++){
            printf("%d ", Mb[i][j]);
        }
        printf("\n");
    }
    printf("----------------------------------------------------");
    printf("\nMatriz C\n");
    for(i = 0; i < nlA; i++){
        for(j = 0; j < ncB; j++){
            printf("%3.d ", Mc[i][j]);
        }
        printf("\n");
    }



    return 0;
}

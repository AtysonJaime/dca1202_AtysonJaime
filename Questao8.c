//Respotas:
//p = mat + 1, Pois como mat é um vetor de array, o ponteiro pode receber o mesmo.
//nesse caso o ponteiro P, recebe o lugar da memoria que está alocado a posição (mat + 1).
//x = (*mat)++; Pois o vetor x está recebendo um valor inteiro.



#include <stdio.h>

int main()
{
    int mat[4], *p, x;

    p = mat + 1;
    printf("p = %d \n", p);
    x = (*mat)++;
    printf("x = %d \n", x);

    return 0;
}

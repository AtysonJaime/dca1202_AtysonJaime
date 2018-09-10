/*
Reposta:
Ponteiro para função é um mode de você fazer declarações de função apontado para outras funções.
serve principalmente para definir, em tempo de execução, qual função será executada,
sem a necessidade de escrever o nome da função, de forma explícita naquele ponto do código.
*/

#include <stdio.h>

typedef int TipoFuncao();

int SomaDosArgumentos(int a, int b){
    return a+b;
}
int SubDosArgumentos(int a, int b){
    return a-b;
}

int main()
{
    int opcao, a, b, retorno;
    TipoFuncao *EF;
    do {
        printf("Digite sua opcao(1,2,3) :");
        scanf("%d", &opcao);
        switch(opcao) {
            case 1:
                printf("Digite o valor para a e b:");
                scanf("%d, %d", &a, &b);
                EF = SomaDosArgumentos;
                break;
            case 2:
                printf("Digite o valor para a e b:");
                scanf("%d, %d", &a, &b);
                EF = SubDosArgumentos;
                break;
            case 3:
                printf("VALEU Falou \n");
                break;
        }
        if(opcao != 3 ){
          retorno = (*EF)(a,b);
          printf ("Retorno da funcao: %d\n\n", retorno);
        }
    } while(opcao !=3);

    return 0;
}

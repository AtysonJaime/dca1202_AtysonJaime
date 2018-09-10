#include <stdio.h>

int main()
{
    int i=5, j=2, *p, *q;
    q = &j;
    i = (*p)++ + *q;
    p= &i;
    printf("%x %d %d %d %d", p,*p+2,**&p,3**p,**&p+4);

    //Supondo que i ocupa o endereço 4094 na memória:
    //O primeiro (p) ira aparecer o enderoço na memoria, ou seja, 4094.
    //O segundo (*p+2) iria incremetar o valor que esta guardado na memoria p em duas unidades. O valor será 7.
    //O terceiro (**&p) iria mostrar o valor que está guardado na memoria p, ou seja, o valor 5.
    //O quarto (3**p) ira triplicar o valor que está guardado na mamoria p, ou seja, o valor será 15.
    //O quinto (**&p+4) ira incrementar o valor que está guardado na memoria p em 4 unidades. O valor será 9.

return 0;
}

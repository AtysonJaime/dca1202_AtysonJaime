#include <stdio.h>

int main()
{
    int i=3,j=5;
    int *p, *q;
    p = &i;
    q = &j;

    //p == &i;
    //Saida será Verdadeiro
    printf("%d \n", p == &i);

    //*p - *q;
    //Saida será -2
    printf("%d \n", *p - *q);

    //**&p;
    //Saida será 3
    printf("%d \n", **&p);

    //3 - *p/(*q) + 7;
    //Saida será 10
    printf("%d \n", 3 - *p/(*q) + 7);
    return 0;
}

#include <stdio.h>

int main()
{
    int x[4], *px;
    char y[4], *py;
    float z[4], *pz;
    double v[4], *pv;


    px = x;
    py = y;
    pz = z;
    pv = v;

    px = 4092;
    py = 4092;
    pz = 4092;
    pv = 4092;


    printf("%d, %d, %d, %d \n", py, py+1, py+2, py+3);
    printf("%d, %d, %d, %d \n", px, px+1, px+2, px+3);
    printf("%d, %d, %d, %d \n", pz, pz+1, pz+2, pz+3);
    printf("%d, %d, %d, %d \n", pv, pv+1, pv+2, pv+3);

    return 0;


}

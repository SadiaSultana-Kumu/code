#include <stdio.h>
int main ()
{
    double A,B,C;
    double T,Ci,Tr,Q,R;
    double Pi = 3.14159;
    scanf("%lf %lf %lf",&A,&B,&C);
    T = ((0.5)*A*C);
    Ci = (Pi*C*C);
    Tr = (((A+B)/2)*C);
    Q = (B*B);
    R = (A*B);
    printf("TRIANGULO: %0.3lf\n",T);
    printf("CIRCULO: %0.3lf\n",Ci);
    printf("TRAPEZIO: %0.3lf\n",Tr);
    printf("QUADRADO: %0.3lf\n",Q);
    printf("RETANGULO: %0.3lf\n",R);
    return 0;
}

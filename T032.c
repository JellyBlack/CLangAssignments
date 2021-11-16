#include<stdio.h>

double f(double x){
    return 1.0/(1.0+x*x);
}
int main(){
    double a,b,step;
    double sum = 0;
    scanf("%lf%lf", &a, &b);
    step = 0.001;
    while(a <= b){
        sum += 0.5 * step * (f(a) + f(a + step));
        a += step;
    }
    printf("%lf", sum);
    return 0;
}

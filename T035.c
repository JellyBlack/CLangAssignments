#include<stdio.h>
#include<stdlib.h>

int main(){
    int n;
    scanf("%d", &n);
    double *p;
    p=(double*)malloc(n*sizeof(double));
    double *p1 = p;
    double sum = 0;
    int i;
    for(i = 0; i < n; i++){
        scanf("%lf", p1);
        sum += *p1;
        p1++;
    }
    p1 = p;
    double average = sum / n;
    double result = 0;
    for(i = 0; i < n; i++){
        result += (*p1 - average) * (*p1 - average);
        p1++;
    }
    printf("%lf", result);
    free(p);
    p=NULL;
    return 0;
}

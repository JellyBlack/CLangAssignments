#include<stdio.h>

int getfloor(double x){
    if(x >= 0){
        return (int)x;
    }
    else{
        return (int)x - 1;
    }
}

int main(){
    double x;
    scanf("%lf", &x);
    printf("%d", getfloor(x));
    return 0;
}

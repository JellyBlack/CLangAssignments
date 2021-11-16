#include<stdio.h>
#include<stdlib.h>

int resolve(int num){
    int sum = 0;
    int i;
    for(i=1; i < num; i ++){
        if(num % i == 0){
            sum += i;
        }
    }
    return sum;
}


int main(){
    int A,B;
    scanf("%d%d", &A, &B);
    if(A == resolve(B) && B == resolve(A)){
        printf("YES");
    }
    else{
        printf("NO");
    }
    return 0;
}

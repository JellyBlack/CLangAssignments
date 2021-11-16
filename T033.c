#include<stdio.h>

int main(){
    int T, i;
    int array[100];
    int *p = array;
    scanf("%d", &T);
    for(i=0; i<T; i++){
        int a,b;
        scanf("%d%d", &a, &b);
        array[2*i-1] = a;
        array[2*i] = b;
    }
    for(i=0; i<T; i++){
        printf("%d\n", ((array[2*i-1]%100)+(array[2*i]%100))%100);
    }
    return 0;
}

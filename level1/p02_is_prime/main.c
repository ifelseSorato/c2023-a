#include<stdio.h>
#include"isprime.h"
int isprime(int x);
int main(){
    int x;
    scanf("%d",&x);
    if (isprime(x)) {
        printf("������");
    }else{
        printf("��������");
    }
    return 0;
}

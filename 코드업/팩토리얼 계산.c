#include<stdio.h>
int n,sum=1;
int f(int k) {
    if(k < 1) {
        return;
    }
    sum *= k;
    f(k-1);
}
int main(void) {
    scanf("%d", &n);
    f(n);
    printf("%d", sum);
}

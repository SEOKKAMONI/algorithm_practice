#include<stdio.h>

int arr[100][100];

int f(int n,int r){
    if (arr[n][r]>0) {
        return arr[n][r];
    }

    if ((n == r)||r==0) {
        return 1;
    }

    return arr[n][r] =  f(n-1,r-1)+f(n-1, r);
}

int main() {
    int n, r;
    scanf_s("%d %d", &n,& r);
    printf("%d\n", f(n,r));

    return 0;
}
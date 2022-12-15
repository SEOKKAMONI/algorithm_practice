#include<stdio.h>
int n,r;
int f(int n, int r) {
    if(n < r) { // 3 4 이면 2번을 고를수 없음
        return 0;
    }
    else if(n == r || r == 0) { // 한번 밖에 할수없으니
        return 1;
    }
    else if(r == 1) { // 4 1 이면 4번 가능하니깐 n 리턴
        return n;
    }
    return f(n-1, r-1) + f(n-1, r);
}
int main(void) {
    scanf("%d %d", &n,&r);// 3 2 // n이 총개수 r이 골라야하는 개수
    printf("%d", f(n, r));
}
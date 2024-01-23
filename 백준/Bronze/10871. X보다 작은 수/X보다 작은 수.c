#include <stdio.h>
int main(void){
    int N, X, a, c = 0;
    int arr[10000];
    scanf("%d %d", &N, &X);
    if (1 <= N && 1 <= X && N <= 10000 && X <= 10000){
        for (int i = 0; i < N; i++){
            scanf("%d", &a);
            if(a<X){
                arr[c] = a;
                c++;
            }
        }
        for(int i=0; i<c; i++){
            printf("%d ", arr[i]);
        }
    }
}
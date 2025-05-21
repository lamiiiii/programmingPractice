#include <stdio.h>
#define MAX 1000

int max(int a, int b){
    return a>b ? a : b;
}

int main(){
    int N;
    int scores[MAX];
    int dp[MAX] = {0};
    
    scanf("%d", &N);
    
    for (int i=0; i<N; i++){
        scanf("%d", &scores[i]);
    }
    
    for (int i=0; i<N; i++){
        int max_score = scores[i];
        int min_score = scores[i];
        
        for(int j=i; j>=0; j--){
            if(scores[j] > max_score) max_score = scores[j];
            if(scores[j] < min_score) min_score = scores[j];
            
            int group_score = max_score - min_score;
            if(j == 0){
                dp[i] = max(dp[i], group_score);
            }
            else
                dp[i] = max(dp[i], group_score + dp[j-1]);
        }
    }
    
    printf("%d", dp[N-1]);
    return 0;
    
}

#include <stdio.h>
#include <string.h>

int main(){
    char A[51];
    char B[51];
    
    // 문자열 입력받기
    scanf("%s %s", A, B);
    
    // 문자열의 길이 비교를 위한 길이 추출
    int lenA = strlen(A);
    int lenB = strlen(B);
    int sum = 51; // 문자열의 길이가 50이므로 최대값이 51
    
    for(int i=0; i<=(lenB-lenA); i++){
        int current_sum = 0;
        for(int j=0; j<lenA; j++){
            if(A[j] != B[i+j]){
                current_sum++;
            }
        }
        if(current_sum < sum){
            sum = current_sum;
        }
    }
    
    printf("%d", sum);
    return 0;
}
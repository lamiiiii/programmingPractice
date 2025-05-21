
#include <stdio.h>
#define MAX 1000

// 두 수 중 더 큰 값을 반환하는 함수
int max(int a, int b)
{
    return a > b ? a : b;
}

int main()
{
    int N;
    int scores[MAX];
    int dp[MAX] = {0}; // i번째 학생까지의 최대 점수 차이 합

    // 학생 수 입력 받기
    scanf("%d", &N);

    // 점수 입력 받기
    for (int i = 0; i < N; i++)
    {
        scanf("%d", &scores[i]);
    }

    // DP: i는 마지막 조의 끝 인덱스
    // 0번째부터 i번째 학생까지 나눴을 때, 가능한 최대 점수 차이 합
    
    for (int i = 0; i < N; i++)
    {
        int max_score = scores[i];
        int min_score = scores[i];

        // j는 조의 시작점
        for (int j = i; j >= 0; j--)
        {
            if (scores[j] > max_score)
                max_score = scores[j];
            if (scores[j] < min_score)
                min_score = scores[j];

            int group_score = max_score - min_score;
            // j가 0이면, 처음부터 지금까지 하나의 조이므로 이전 DP값 없음
            if (j == 0)
                dp[i] = max(dp[i], group_score);
            else
            // 이전 j-1까지 최적해 + 현재 구간 점수 차이
                dp[i] = max(dp[i], dp[j - 1] + group_score);
        }
    }

    printf("%d\n", dp[N - 1]);

    return 0;
}
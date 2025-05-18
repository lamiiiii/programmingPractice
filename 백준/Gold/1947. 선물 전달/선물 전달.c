// 문제
// 이번 ACM-ICPC 대회에 참가한 모든 사람들은 선물을 하나씩 준비했다.

// 대회가 끝나고 난 후에 각자 선물을 전달하려고 할 때, 선물을 나누는 경우의 수를 구하는 프로그램을 작성하시오.

// 모든 사람은 선물을 하나씩 받으며, 자기의 선물을 자기가 받는 경우는 없다.

// 입력
// 첫째 줄에 ACM-ICPC 대회에 참가한 학생의 수 N(1 ≤ N ≤ 1,000,000)이 주어진다.

// 출력
// 경우의 수를 1,000,000,000으로 나눈 나머지를 첫째 줄에 출력한다.

#include <stdio.h>
#define MOD 1000000000

int main()
{
    int N;
    scanf("%d", &N);

    if (N == 1)
    {
        printf("0\n");
        return 0;
    }

    long long prev2 = 0; // D(n-2)
    long long prev1 = 1; // D(n-1)
    long long current = 0;

    // 교란 순열, D(n)을 이전 값(1, 2)를 통해 차례대로 구함
    for (int i = 3; i <= N; i++)
    {
        current = ((i - 1) * (prev1 + prev2)) % MOD;

        prev2 = prev1;
        prev1 = current;
    }

    if (N == 2)
        printf("1\n");
    else
        printf("%lld\n", current);

    return 0;
}

// 길이가 N으로 같은 문자열 X와 Y가 있을 때, 두 문자열 X와 Y의 차이는 X[i] ≠ Y[i]인 i의 개수이다. 예를 들어, X=”jimin”, Y=”minji”이면, 둘의 차이는 4이다.

// 두 문자열 A와 B가 주어진다. 이때, A의 길이는 B의 길이보다 작거나 같다. 이제 A의 길이가 B의 길이와 같아질 때 까지 다음과 같은 연산을 할 수 있다.

// A의 앞에 아무 알파벳이나 추가한다.
// A의 뒤에 아무 알파벳이나 추가한다.
// 이때, A와 B의 길이가 같으면서, A와 B의 차이를 최소로 하는 프로그램을 작성하시오.

#include <stdio.h>
#include <string.h>

int main()
{
    char A[51];
    char B[51];
    scanf("%s %s", A, B);

    int lenA = strlen(A);
    int lenB = strlen(B);
    int sum = 51;

    for (int i = 0; i <= lenB - lenA; i++)
    {
        int current_sum = 0;

        for (int j = 0; j < lenA; j++)
        {
            if (A[j] != B[i + j])
            {
                current_sum++;
            }
        }

        if (current_sum < sum)
        {
            sum = current_sum; // 이전 값이 있으면 비교해서 최소값을 저장
        }
    }

    printf("%d", sum);
    return 0;
}
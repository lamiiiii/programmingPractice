
#include <stdio.h>
#include <string.h>

int main()
{
    int N;
    char st_arr[101][101];
    int result = 0;  // 그룹단어 아닌 개수 체크
    scanf("%d", &N); // 전체 단어 개수

    // 단어 N개 배열에 입력받기
    for (int i = 0; i < N; i++)
    {
        scanf("%s", st_arr[i]);
    }

    // 그룹단어 찾기 반복문
    for (int i = 0; i < N; i++)
    {                           // 단어 N개 반복
        char prev = 0;          // 바로 직전 단어를 체크하는 변수
        int alphabet[26] = {0}; // 이전에 나왔던 단어를 기록하는 배열

        for (int j = 0; j < strlen(st_arr[i]); j++)
        { // 현재 단어 하나씩 확인
            if (st_arr[i][j] != prev)
            { // 이전 단어와 다르다면
                if (alphabet[st_arr[i][j] - 'a'] == 1)
                { // 1이면 이미 나왔던 단어
                    result++;
                    break;
                }
                alphabet[st_arr[i][j] - 'a'] = 1; // 안나왔던 단어라면 체크
                prev = st_arr[i][j];              // 현재 알파벳을 다음 알파벳과의 비교를 위해 저장;
            }
        }
    }
    printf("%d", N - result);
    return 0;
}
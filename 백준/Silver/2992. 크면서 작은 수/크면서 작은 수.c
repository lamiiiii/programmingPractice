
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <stdbool.h>

void swap(char *a, char *b){
    char temp = *a;
    *a = *b;
    *b = temp;
}

void reverse (char *arr, int start, int end){
    while (start < end){
        swap(&arr[start], &arr[end]);
        start++;
        end--;
    }
}

bool next_permutation(char *arr, int len) {
    int i = len - 1;
    while (i > 0 && arr[i - 1] >= arr[i])
        i--;

    if (i == 0)
        return false; // 마지막 순열

    int j = len - 1;
    while (arr[i - 1] >= arr[j])
        j--;

    swap(&arr[i - 1], &arr[j]);
    reverse(arr, i, len - 1);
    return true;
}

int main()
{
    char str[11];
    scanf("%s", str);

    int len = strlen(str);
    char original[11];
    strcpy(original, str);

    // next_permutation 반복
    while (next_permutation(str, len)) {
        if (strcmp(str, original) > 0) {
            printf("%s\n", str);
            return 0;
        }
    }

    // 없다면
    printf("0\n");
    return 0;
}
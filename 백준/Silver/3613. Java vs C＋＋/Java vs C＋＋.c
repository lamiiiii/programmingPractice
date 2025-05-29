#include <stdio.h>
#include <string.h>
#include <ctype.h> // 대소문자 판별

int main()
{
    char word[101];
    scanf("%100s", word);
    int len = strlen(word);

    int isCp = 0, isJava = 0, isError = 0;

    if (word[0] == '_' || word[len - 1] == '_')
        isError = 1;
    for (int i = 0; i < len; i++)
    {
        if (isupper(word[i]))
            isJava = 1;
        if (word[i] == '_')
        {
            isCp = 1;
            if (i + 1 < len && word[i + 1] == '_')
                isError = 1;
        }
        if (!islower(word[i]) && word[i] != '_' && !isupper(word[i]))
            isError = 1;
    }

    if (isJava && isCp)
        isError = 1;
    if (isJava && isupper(word[0]))
        isError = 1;

    if (isError)
    {
        printf("Error!");
        return 0;
    }

    // Java를 C++로 변환
    if (isJava)
    {
        for (int i = 0; i < len; i++)
            if (isupper(word[i]))
            {
                putchar('_');
                putchar(tolower(word[i]));
            }
            else
            {
                putchar(word[i]);
            }
    }
    // C++을 Java로 변환
    else if (isCp)
    {
        for (int i = 0; i < len; i++)
        {
            if (word[i] == '_')
            {
                i++;
                putchar(toupper(word[i]));
            }
            else
            {
                putchar(word[i]);
            }
        }
    }
    else
    {
        printf("%s", word);
    }
    return 0;
}
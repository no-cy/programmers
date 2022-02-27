#include <stdio.h>

// 파라미터로 주어지는 문자열은 const로 주어집니다. 변경하려면 문자열을 복사해서 사용하세요.
char* solution(const char* s) {
    // return 값은 malloc 등 동적 할당을 사용해주세요. 할당 길이는 상황에 맞게 변경해주세요.
    char* answer = (char*)malloc(2+1);
    
    int s_len = 0;
    
    memset(answer, 0x00, 2+1);
    
    if(strlen(s) % 2 == 0)
    {
        s_len = strlen(s) / 2;
        answer[0] = s[s_len-1];
        answer[1] = s[s_len];
    }
    else
    {
        s_len = strlen(s) / 2;
        answer[0] = s[s_len];
    }
    
    return answer;
}

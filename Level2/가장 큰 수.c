#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

int CmpNumber(const void *v1, const void *v2)
{
    int num1 = *(int *)v1;
    int num2 = *(int *)v2;
    
    char sub_str1[8+1] = {0,};
    char sub_str2[8+1] = {0,};
    
    snprintf(sub_str1, sizeof(sub_str1), "%d%d", num1, num2);
    snprintf(sub_str2, sizeof(sub_str2), "%d%d", num2, num1);
    
    
    if(strcmp(sub_str1, sub_str2) > 0)
        return -1;
    else if(strcmp(sub_str1, sub_str2) == 0)
        return 0;
    else
        return 1;
}


// numbers_len은 배열 numbers의 길이입니다.
char* solution(int numbers[], size_t numbers_len) {
    // return 값은 malloc 등 동적 할당을 사용해주세요. 할당 길이는 상황에 맞게 변경해주세요.
    int i = 0;
    int str_len = 0;
    char buffer[10000+1] = {0,};
    char* answer;
    
    for (i = 0; i < numbers_len; i++)
    {
        sprintf(buffer, "%d", numbers[i]);
        str_len += strlen(buffer);
    }
    
    answer = (char *)malloc(str_len + 1);
    memset(buffer, 0x00, sizeof(buffer));
    memset(answer, 0x00, sizeof(str_len + 1));
    qsort(numbers, numbers_len, sizeof(int), CmpNumber);
    
    if(numbers[0] != 0)
    {
        for(i = 0; i < numbers_len; i++)
        {
            sprintf(buffer, "%d", numbers[i]);
            strncat(answer, buffer, strlen(buffer));
        }
    }
    else
        answer[0] = '0';
    
    return answer;
}

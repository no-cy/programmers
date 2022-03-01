#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

// absolutes_len은 배열 absolutes의 길이입니다.
// signs_len은 배열 signs의 길이입니다.
int solution(int absolutes[], size_t absolutes_len, bool signs[], size_t signs_len) {
    int answer = 0;
    int *arr = NULL;
    int i = 0;

    arr = (int *)malloc(sizeof(int) * absolutes_len);
    memset(arr, 0x00, sizeof(int) * absolutes_len);

    for(i=0; i<signs_len; i++)
    {
        if(signs[i] == false)
        {
           arr[i] = ~absolutes[i]+1;
        }
        else
        {
            arr[i] = absolutes[i];
        }
    }

    for(i=0; i<absolutes_len; i++)
    {
        answer += arr[i];
    }

    free(arr);

    return answer;
}

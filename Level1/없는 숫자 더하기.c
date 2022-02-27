#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int arr[10];
int numbers_arr[10] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};

// numbers_len은 배열 numbers의 길이입니다.
int solution(int numbers[], size_t numbers_len) {
    int answer = 0;
    int i = 0;
    
    for(i=0; i<numbers_len; i++)
    {
        arr[numbers[i]]++;
    }
    
    for(i=0; i<sizeof(arr)/sizeof(arr[0]); i++)
    {
        if(arr[i] != 1)
        {
            answer += numbers_arr[i];
        }
    }
    
    return answer;
}

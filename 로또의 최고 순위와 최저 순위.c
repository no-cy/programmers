#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

// lottos_len은 배열 lottos의 길이입니다.
// win_nums_len은 배열 win_nums의 길이입니다.
int* solution(int lottos[], size_t lottos_len, int win_nums[], size_t win_nums_len) {
    // return 값은 malloc 등 동적 할당을 사용해주세요. 할당 길이는 상황에 맞게 변경해주세요.
    int* answer = (int*)malloc(1);
    int zero_cnt = 0;
    int cnt = 0;
    int max_cnt = 0, min_cnt = 0;
    int i = 0, j = 0;
        
    while(1)
    {
        if(j == win_nums_len)
        {
            break;   
        }
        
        if(lottos[j] == 0)
        {
            zero_cnt++;
            j++;
            continue;
        }
                
        for(i=0; i<win_nums_len; i++)
        {
            if(win_nums[i] == lottos[j])
            {
                cnt++;
                break;
            }                
        }     
        j++;
    }

    max_cnt = cnt + zero_cnt;
    min_cnt = cnt;

    for(i=0; i<2; i++)
    {
        cnt = 0;
        
        if(i == 0) cnt = max_cnt;
        else cnt = min_cnt;
        
        switch(cnt)
        {
            case 6:
                answer[i] = 1;
                break;
            case 5:
                answer[i] = 2;
                break;
            case 4:
                answer[i] = 3;
                break;
            case 3:
                answer[i] = 4;
                break;
            case 2:
                answer[i] = 5;
                break;
            default:
                answer[i] = 6;
        }
    }
    
    return answer;
}

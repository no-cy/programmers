#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int prime(int sum)
{
    for(int i=2; i<sum; i++) // 1은 소수이므로 2부터 시작.
    {
        if(sum % i == 0)  return false; // 한번이라도 나누어 떨어지면 소수가 아니므로 false.
    }
    
    return true; // 떨어지는 수가 없으면 true.   
}

// nums_len은 배열 nums의 길이입니다.
int solution(int nums[], size_t nums_len) {
    int answer = 0;
    int i = 0, j = 0, k = 0;
    int sum_num = 0;
    
    for(i=0; i<nums_len; i++)
    {
        for(j=i+1; j<nums_len; j++)
        {
            for(k=j+1; k<nums_len; k++)
            {
                sum_num = nums[i] + nums[j] + nums[k];
                answer += prime(sum_num);
            }
        }
    }
    
    return answer;
}

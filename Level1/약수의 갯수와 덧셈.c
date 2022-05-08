#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int solution(int left, int right) {
    int answer = 0;
    int i = 0, j = 0;
    int divisor = 0;
    int arr[1000] = {0,};

    for(left; left<=right; left++)
    {
        for(i=1; i<=left; i++)
        {
             if(left % i == 0)
             {
                 divisor++;
             }
        }

        if(divisor % 2 == 0)
        {
             arr[j] = left;
        }
        else
        {
             arr[j] = ~left+1;
        }

        j++;
        divisor = 0;
    }

     for(i=0; i<sizeof(arr)/sizeof(arr[0]); i++)
     {  
           answer += arr[i];       
     }

    return answer;
}

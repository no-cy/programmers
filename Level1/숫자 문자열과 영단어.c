#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

// 파라미터로 주어지는 문자열은 const로 주어집니다. 변경하려면 문자열을 복사해서 사용하세요.
int solution(const char* s) {
    int answer = 0;
    int i = 0, j = 0, z = 0;
    
    char *tmp_num;
    char numbers[][10] = {"zero", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};
    
    tmp_num = (char *)malloc(strlen(s)+1);
    memset(tmp_num, 0x00, strlen(s)+1);
    
    while(s[i] != NULL)
    {
        if(s[i] >= '0' && s[i] <= '9')
        {
          tmp_num[z++] = s[i++];
        }
        else
        {
            for(j=0; j<sizeof(numbers)/sizeof(numbers[0]); j++)
            {
                
               if(strncmp(&s[i], numbers[j], strlen(numbers[j])) == 0)
               {
                   sprintf(&tmp_num[z++], "%d", j);
                   i += strlen(numbers[j]);                   
               }
            }      
        }         
    }
    
    return atoi(tmp_num);
}

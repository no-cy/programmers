#include <stdio.h>
#include <string.h>

// 파라미터로 주어지는 문자열은 const로 주어집니다. 변경하려면 문자열을 복사해서 사용하세요.
char* solution(const char* s) {
    // return 값은 malloc 등 동적 할당을 사용해주세요. 할당 길이는 상황에 맞게 변경해주세요.
    char* answer = (char*)malloc(sizeof(char)*(strlen(s))+1);    
    int i = 0;
    int n = 0;
    
    memset(answer,0x00,sizeof(char)*(strlen(s))+1);
    //strcpy(answer,s);
  
    while(s[i] != '\0')
    {
        if (s[i] == ' ') 
        {
            n = 0;
	answer[i] = s[i];
            i++;
            continue;
        }
        
        if (n % 2 == 0)
        {
            if((s[i] >= 65 && s[i] <= 90))
            {
               answer[i] = s[i];
            }
            else
            {
               answer[i] = s[i] - 32;
            }
        }
        else
        {
           if((s[i] >= 'a' && s[i] <= 'z'))
           {
              answer[i] = s[i];
           }
           else
           {
              answer[i] = s[i] + 32;
           }
        }    
        
        i++;
        n++;        
    }
    
    answer[strlen(answer)] = 0x00;
        
    return answer;
}

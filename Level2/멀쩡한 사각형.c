#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

long long gcd(int w, int h)
{   
    if (h == 0)
    {
        return (long long)w;
    }
            
    return gcd(h, w % h);
}

long long solution(int w, int h) {
    long long answer = 1;
    long long sum = 0;
    long long wl = 0; 
    
    wl = gcd(w, h);
    //printf("wl : %lld\n", wl);
    sum = (long long)(w * h);
    //printf("sum : %lld\n", sum);
         
    return sum - (w + h - wl);
}

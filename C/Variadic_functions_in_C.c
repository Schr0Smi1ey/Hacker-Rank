#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define MIN_ELEMENT 1
#define MAX_ELEMENT 1000000
int sum(int nums, ...){
    int result = 0;
    va_list args;
    va_start(args, nums);

    for(int i=0;i<nums;i++){
        result += va_arg(args,int);
    }
    va_end(args);
    return result;
}
int minima(int a,int b){
    if(a > b) return b;
    return a;
}
int min(int nums,...){
    int ans = 1e9;
    va_list args;
    va_start(args, nums);
    for(int i=0;i<nums;i++){
        ans = minima(ans,va_arg(args, int));
    }
    va_end(args);
    return ans;
}
int maxima(int a,int b){
    if(a > b) return a;
    return b;
}
int max(int nums, ...){
    int ans = -1e9;
    va_list argu;
    va_start(argu, nums);
    for(int i=0;i<nums;i++){
        ans = maxima(ans,va_arg(argu,int));
    }
    va_end(argu);
    return ans;
}
#include<stdio.h>

int main()
{
    int a;
    scanf("%d",&a);
    if(a%5==0){
    if(a%11==0){
    printf("%d is divisible by 5 and 11",a);
    }
    
    else{
    printf("%d is not divisible by 5 and 11",a);
    }
    }
    return 0;
}
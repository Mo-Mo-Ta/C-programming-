#include<stdio.h>

int main()
{
    float a;
    printf("Enter an angle:");
    scanf("%f",&a);
    if(a>0 && a<90){
    printf("It's an acute angle");
    }
    else if(a==90){
    printf("It's a right angle");
    }
    else  if(a>90 && a<180){
    printf("It's an obtuse angle");
    }
    else if(a==0||a==180){
    printf("It's a straight angle");
    }
    else if(a>180 && a<360){
    printf("It's a reflex angle");
    }
    else if(a==360){
    printf("It's a full angle");
    }
    else{
    printf("Invalid angle");
    }
    
    return 0;
}
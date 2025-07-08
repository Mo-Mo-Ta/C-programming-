#include<stdio.h>

int main()
{
    char alphabet;
    printf("Enter an alphabet:");
    scanf("%c",&alphabet);
    if(alphabet=='a'||alphabet=='A'){
    printf("It's a vowel",alphabet);
    }
    else  if(alphabet=='e'||alphabet=='E'){
    printf("It's a vowel",alphabet);
    }
    else  if(alphabet=='i'||alphabet=='I'){
    printf("It's a vowel",alphabet);
    }
    
    else if(alphabet=='o'||alphabet=='O'){
    printf("It's a vowel",alphabet);
    }
   else if(alphabet=='u'||alphabet=='U'){
    printf("It's a vowel",alphabet);
    }
    else{
    printf("It's a consonant");
    }
    return 0;
}
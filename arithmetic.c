#include<stdio.h>
int main()
{
int A,B;
printf("Enter a number:");
scanf("%d",&A);
printf("Enter a number:");
scanf("%d",&B);
printf("%d + %d = %d\n",A,B,A+B);
printf("%d - %d = %d\n",A,B,A-B);
printf("%d * %d = %d\n",A,B,A*B);
printf("%f / %d = %f",(float)A,B,(float)A/B);
return 0;
}

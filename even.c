#include<stdio.h>
#include<stdlib.h>
int main()
{
int a;
scanf("%d",&a);
if(a%2==0)
printf("Even");
else if(a<0)
printf("invalid");
else
printf("Odd");
return 0;
}

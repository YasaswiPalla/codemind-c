#include<stdio.h>
#include<math.h>
int main()
{
int num;
int n;
float m;
scanf("%d",&num);
m=sqrt((double)num);
n=m;
if(m==n)
printf("True");
else
printf("False");
return 0;
}
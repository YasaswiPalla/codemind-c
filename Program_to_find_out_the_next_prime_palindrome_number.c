#include<stdio.h>
int main()
{
    int n,i,r,s=0,c=0,temp,j,t;
    scanf("%d",&n);
    for(i=n+1;;i++)
    {
        temp=i;
        s=0;
        while(temp)
        {
            r=temp%10;
            s=(s*10)+r;
            temp/=10;
        }
        if(s==i)
        {
            t=s;
            c=0;
            for(j=1;j<=t;j++)
            {
                if(t%j==0)
                {
                    c++;
                }
            }
            if(c==2)
            {
                printf("%d",s);
                break;
                
            }
        }
    }
}
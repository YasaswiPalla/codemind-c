#include<stdio.h>
int main()
{
    int n,m,i,j,c=0,p=0;
    scanf("%d%d",&n,&m);
    for(i=n;i<=m;i++)
    {
        c=0,p=i;
        for(i=n;i<=m;i++)
        {
            c=0,p=i;
            for(j=1;j<=p;j++)
            {
                if(p%j==0)
                c++;
            }
            if(c==2)
            printf("%d
",i);
        }
    }
}
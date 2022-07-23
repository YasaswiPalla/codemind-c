#include<stdio.h>
int main()
{
    int t,n,i;
    scanf("%d",&t);
    for(i=0;i<t;i++)
    {
        int c=0,x,j;
        scanf("%d",&n);
        for(j=0;j<n;j++)
        {
            scanf("%d",&x);
        if(x%2!=0)
        {
            c++;
        }
    }
    printf("%d
",c/2);
}
}

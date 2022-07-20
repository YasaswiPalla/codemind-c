#include<stdio.h>
int main()
{
    char str[1000];
    int n,m,i;
    scanf("%[^
]s",str);
    scanf("%d%d",&n,&m);
    for(i=n;i<=m;i++)
    {
        printf("%c",str[i]);
    }
}
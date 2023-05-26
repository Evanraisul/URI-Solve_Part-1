#include<stdio.h>
int main()
{
    long long int a,b,c,i,j,x,ar[100000];
    while(scanf("%lld %lld",&a,&b)!=EOF)
    {
        i=0;
        if(a==0 && b==0)
            break;
        c=a+b;
        while(c!=0)
        {
            x=c%10;
            i++;
        ar[i]=x;
            c=c/10;
        }
        for(j=i;j>=1;j--)
        {
            if(ar[j]!=0)
            {
                printf("%lld",ar[j]);
            }
        }
        printf("\n");
    }
    return 0;
}

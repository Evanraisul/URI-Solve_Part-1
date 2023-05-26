#include<stdio.h>
int main()
{
    long long int a,b,c,i,j,k,m,n;
    while(scanf("%lld %lld %lld",&a,&b,&c)!=EOF)
    {
        if(a==0 && b==0 && c==0)
        {
            break;
        }
        i=(a/b);
        j=(a/c);
        if(b%2==1 || c%2==1)
        {
            k=(b*c);
        }
        else
        k=(b*c)/(c-b);
        m=(a/k);
        n=(i+j)-m;
        printf("%lld\n",n);
    }
    return 0;
}

#include<stdio.h>
int main()
{
    int a,b,c,i,j,k,z,x;
    scanf("%d",&a);
    for(i=1; i<=a; i++)
    {
        scanf("%d %d",&b,&c);
        for(j=b; j<=c; j++)
        {
            printf("%d",j);
        }
        for(k=c; k>=b; k--)
        {
                z=k;
                while(z!=0)
                {
                    x=z%10;
                    printf("%d",x);
                    z=z/10;
                }
        }
        printf("\n");
    }
    return 0;
}

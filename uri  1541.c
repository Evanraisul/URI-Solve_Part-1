#include<stdio.h>
#include<math.h>
int main()
{
    int a,b,c,i,j,k;
        while(scanf("%d %d %d",&a,&b,&c)==0)
        {
            if(a==0)
                break;
            i=(a*b*100)/c;
            j=sqrt(i);
            printf("%d\n",j);
        }
    return 0;

}

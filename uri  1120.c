#include<stdio.h>
#include<string.h>
int main()
{
    int a,b,c,i,j,k,z;
    char ch[1000],ar[1000];
    while(scanf("%d %s",&a,ch)==2)
    {
        z=0;
        j=0;
        if(a==0 && ch[0]=='0')
        {
            break;
        }
        b=strlen(ch);
        for(i=0; i<b; i++)
        {
            if((ch[i]-'0')!=a && z==1)
            {
                j++;
                ar[j]=ch[i];
            }
            else if((ch[i]-'0')!=a && ch[i]>='1' && ch[i]<='9')
            {
                j++;
                ar[j]=ch[i];
                z=1;
            }
        }
        if(j==0)
        {
            printf("0\n");
        }
        else
        {
            for(k=1; k<=j; k++)
            {
                printf("%c",ar[k]);
            }
            printf("\n");
        }
    }
    return 0;
}

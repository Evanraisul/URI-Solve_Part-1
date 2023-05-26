#include<stdio.h>
#include<string.h>
int main()
{
    int i,j,k,n,a,b,l;
    char str1[52],str2[52];
    scanf("%d",&n);
    for(i = 0; i < n; i++)
    {
        scanf("%s %s",str1,str2);
        a=strlen(str1);
        b=strlen(str2);
        if(a>=b)
        {
             l=a;
        }
        else
        {
            l=b;
        }
        for(j = 0; j < l; j++)
        {
            if(j<a)
            {
                 printf("%c",str1[j]);
            }
            if(j<b)
            {
                  printf("%c",str2[j]);
            }
        }
        printf("\n");
    }
    return 0;
}

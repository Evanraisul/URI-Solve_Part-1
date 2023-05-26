#include<stdio.h>
#include<string.h>
int main()
{
    char str[10000],str1[10000];
    int i,j,k,l,n,m;
    while(gets(str))
    {
        i = strlen(str);
        for(j=0; j<i; j++)
        {
            if(str[j]>='A' && str[j]<='Z' )
            {
                if(str[j]<'N')
                str[j] = str[j]+13;
                else
                str[j] = ((str[j] + 13)-26);
            }
            else if (str[j]>='a' && str[j]<='z' )
            {
                if(str[j]<'n')
                    str[j] = str[j]+13;
                else
                    str[j] = ((str[j] + 13)-26);
            }
        }
        printf("%s\n",str);
    }
    return 0;
}

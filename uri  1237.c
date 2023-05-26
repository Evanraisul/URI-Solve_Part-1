#include<stdio.h>
#include<string.h>
int main()
{
    char  str1[1000],str2[1900];

    while(gets(str1))
    {
        gets(str2);
        int len=0,len2=0,i,j,k,l;
        for(i=0; i<strlen(str1); i++)
        {
            for(j=0; j<strlen(str2); j++)
            {
                if(str2[j]==str1[i])
                {
                    len2=0;
                    for (k = j,l=i;k<strlen(str2),l<strlen(str1);k++,l++)
                    {
                        if(str2[k]!=str1[l])
                            break;
                        len2++;
                    }

                    if(len2>len)
                    {
                        len=len2;
                    }
                }
            }
        }
        printf("%d\n",len);
    }
    return 0;
}

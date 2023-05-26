

#include <stdio.h>

#include <string.h>

int main ()

{

    char str[1000],str1[1000];

    int i,j,k,l,m,n,nishi,rumman;

    while(gets(str) != NULL)

    {

        scanf("%d",&i);

        l = strlen(str);

        nishi = 0;

        n=0;

        rumman= 0;

        for(j=0; j<l; j++)

        {

            if(str[j]== 'W')

                rumman++;

            if(str[j] == 'R')

            {

                nishi++;

            }

            while(str[j]== 'W' || j == l-1)

            {

                if(nishi<i && nishi != 0)

                    n++;

                else if(nishi>=i)

                {

                    if(nishi%i==0)

                        n = n+(nishi/i);

                    else

                        n = n + (nishi/i) + 1;

                }

                nishi = 0;

                break;

            }

        }

        printf("%d\n",(n+rumman));

        getchar();

    }
    return 0;

}

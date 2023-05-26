#include<stdio.h>
#include<string.h>
int main()
{
    int a,b,c,i,j;
    char ch[100];
    while(scanf("%d",&a)==1)
    {
        for(i=0; i<=a; i++)
        {
            scanf("%[^\n]",ch);
        }
        for(j=0; j<=a; j++)
        {
            if(j!=0)
                printf("I am Toorg!\n");
        }
    }
    return 0;
}

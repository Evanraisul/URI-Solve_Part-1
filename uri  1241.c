#include<stdio.h>
#include<string.h>
int main()
{
    int a,b,c,i,j,k,x,z;
    char ch[1009],ar[1009];
   scanf("%d",&a);
   getchar();
   for(i=1;i<=a;i++)
   {
       k=0;
       scanf("%s %s",ch,ar);
       b=strlen(ch);
       c=strlen(ar);
       if(b<c)
       {
           k=1;
       }
       else
       {
           z=(b-c);
           for(j=0;j<c;j++)
           {
               for(x=j+z;x<=j+z;x++)
               {
                   if(ar[j]!=ch[x])
                   {
                       k=1;
                   }
               }
           }
       }
       if(k==0)
       {
           printf("encaixa\n");
       }
       else
       {
           printf("nao encaixa\n");
       }
   }
   return 0;
}

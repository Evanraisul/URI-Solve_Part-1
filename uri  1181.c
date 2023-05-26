#include <stdio.h>
int main()
{
    int x,i,j;
    double total = 0, t;
    scanf("%d",&x);
    char op;
    scanf("%c",&op);
    for (i = 0; i < 12; ++i)
    {
        for (j = 0; j < 12; ++j)
        {
            scanf("%lf",&t);;
            if (i == x)
                total += t;
        }
    }
    if(op == 'S' ? printf("%.1lf",total) :printf("%.1lf",total / 12.0));
    return 0;
}

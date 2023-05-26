#include <stdio.h>
#include <string.h>
int main(int argc, char const *argv[])
{
    int n, i, size, r;
    char s[1009];
    scanf("%d",&n);
    getchar();
    while(n--)
    {

        gets(s);
        int sigma[1009]= {0};
        size = strlen(s);
        r = 0;

        for (i = 0; i < size; ++i)
        {
            if(s[i] > 96 && s[i] < 123)
            {
                if(sigma[(int)s[i] - 97] == 0)
                {
                    sigma[(int)s[i] - 97]++;
                    r++;
                }
            }
        }

        if(r == 26)
            printf("frase completa\n");
        else
        {
            if(r > 13)
                printf("frase quase completa\n");
            else
                printf("frase mal elaborada\n");
        }

    }
    return 0;
}

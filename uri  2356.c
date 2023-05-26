#include<bits/stdc++.h>
#include<stdio.h>
using namespace std;
int main()
{
    string x,y;
    while(cin>>x>>y)
    {
        bool X=false;
        for(int i=0; i<x.length(); i++)
        {
            X=false;
            if(x[i]==y[0])
            {
                for(int j=i,k=0; k<y.length(); j++,k++)
                {
                    if(x[j]==y[k])
                    {
                        X=true;
                    }
                    else
                    {
                        X=false;
                        break;
                    }
                }
            }
            if(X)
                break;
        }
        if(X)
            cout<<"Resistenten";
        else
            cout<<"Nao resistenten";
            printf("\n");
    }
    return 0;
}

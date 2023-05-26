#include<bits/stdc++.h>
using namespace std;
int main()
{
    string x[100];
    int N,M;
    while(cin>>N>>M&&N&&M)
    {
        cin.ignore();
        for(int i=0;i<N;i++){
           cin>>x[i];
        }
    int n,m;
    cin>>n>>m;
    int height=(n/N);
    int width=(m/M);
    for(int i=0;i<N;i++)
    {
        string temp=x[i];

        for(int j=0;j<height;j++)
        {
            for(int k=0;k<temp.length();k++)
            {
                for(int print=1;print<=width;print++){
                    cout<<temp[k];
                }
            }
            cout<<endl;
        }

    }
    cout<<endl;
    }
    return 0;
}

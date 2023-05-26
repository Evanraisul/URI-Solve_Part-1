#include <bits/stdc++.h>
using namespace std;

string b,c,d;
int i,j,k,l;
int main()
{
    vector<string>kid(4);
    for(auto &i : kid)
        cin >> i ;
    int p = 0;
    while(p<4)
    {
        c += kid[p][0];
        d += kid[p].back();
        p++;
    }
    l = atoi(d.c_str());
    k = atoi(c.c_str());
    for(i=1; i<kid[0].size()-1; i++)
    {
        string a;
        for(j=0; j<4; j++)
            a += kid[j][i];

        int	r = atoi(a.c_str());
        cout << (char)((k * r + l)%257);
    }
    cout <<endl;
    return 0;
}

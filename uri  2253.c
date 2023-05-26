#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    while(getline(cin,s))
    {
        string s1 = "";
        int u=0,sm=0;
        for( int i = 0 ;  i  <  s.size()  ; i++ )
        {
            if((isupper(s[i])) or (islower(s[i])) or (isdigit(s[i])))
            {
                s1 += s[i];
                if(isupper(s[i]))
                    u++;
                if(islower(s[i]))
                    sm++;
            }
            else
            {
                break;
            }
        }
        if(s1.size() == s.size() and u>0 and sm>0 and s1.size() > 5 and s1.size() < 33)
            cout << "Senha valida.\n";
        else
            cout << "Senha invalida.\n";
    }
    return 0;
}

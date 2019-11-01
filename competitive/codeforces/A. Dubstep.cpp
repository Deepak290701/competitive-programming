
//id:- deepak290701

#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin>>s;
    for(int i=0;i<s.length();i++){
        if(s[i]=='W'){
            if(s[i+1]=='U'){
                if(s[i+2]=='B'){
                    i=i+2;
                    cout<<" ";
                    continue;
                }
            }
        }

            cout<<s[i];

    }
    return 0;
}

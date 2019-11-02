
// id:-deepak290701

#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
   int n,m,flag=1;
   cin>>n>>m;
   for(int i=0;i<n;i++){
    for(int j=0;j<m;j++){
        char c;
        cin>>c;
        if(c=='C' || c=='M' || c=='Y')
            flag=0;
    }
   }
   if(flag)
    cout<<"#Black&White";
   else
    cout<<"#Color";
   return 0;
}

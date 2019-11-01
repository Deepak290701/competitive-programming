
// id:-deepak290701

#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
   int n;
   cin>>n;
   int a;
   int b[n+4]={0};
   for(int i=1;i<=n;i++)
    {
        cin>>a;
        b[a]=i;
    }
    int m;
    cin>>m;
    ll int lindex=0,rindex=0;
    //cout<<2-b[1]<<" ";
    while(m--){
        int n1;
        cin>>n1;
         lindex+=b[n1];
         rindex+=(n-b[n1]+1);
    }
    cout<<lindex<<" "<<rindex<<"\n";
   return 0;
}

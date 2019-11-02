
// id:-deepak290701

#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
   int n;
   cin>>n;
   string s;
   cin>>s;
   string a="",b="";
   for(int i=0;i<n;i++){
    if(i&1)
        b+=s[i];
    else
        a+=s[i];
   }
   if(n&1){
    reverse(b.begin(),b.end());
    cout<<b<<a;
   }
   else{
    reverse(a.begin(),a.end());
    cout<<a<<b;
   }
   return 0;
}

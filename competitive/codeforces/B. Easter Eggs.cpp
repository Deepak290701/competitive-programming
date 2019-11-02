
// id:-deepak290701

#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
   int n;
   cin>>n;
   int temp=n%7;
   int temp1=n/7;
   while(temp1--){
        cout<<"ROYGBIV";
   }
   string s="GBIVGBIV";
   if(temp>0)
   cout<<s.substr(0,temp);
   return 0;
}


// id:-deepak290701

#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
   ll int n;
   cin>>n;
   ll int a[n+1],dp[n+1];
   dp[0]=a[0]=0;
   cin>>a[1];
   dp[1]=a[1];
   for(ll int i=2;i<=n;i++){
        cin>>a[i];
        dp[i]=dp[i-1]+a[i];
   }
   sort(a,a+n+1);
   ll int dps[n+1];
   dps[0]=0;
   dps[1]=a[1];
   for(ll int i=2;i<=n;i++){
        dps[i]=dps[i-1]+a[i];
   }
   ll int m;
   cin>>m;
   while(m--){
    ll int type,l,r;
    cin>>type>>l>>r;


    if(type==1){
        cout<<dp[r]-dp[l-1]<<"\n";
    }
    else{
        cout<<dps[r]-dps[l-1]<<"\n";

    }

   }
   return 0;
}

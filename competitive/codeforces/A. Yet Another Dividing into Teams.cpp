
//id:- deepak290701

#include <bits/stdc++.h>
using namespace std;
#define int long long
#define fastio ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0)

int32_t main() {
	// your code goes here
	fastio;
	int t;
	cin>>t;

	while(t--){
	    int n;
	    cin>>n;

	    int a[n];
	    int out=1;
	    for(int i=0;i<n;i++)
	        cin>>a[i];
	    sort(a,a+n);
	    for(int i=1;i<n;i++)
	       if(a[i]-a[i-1]==1)
	            out=2;
	   cout<<out<<"\n";
	}
	return 0;
}

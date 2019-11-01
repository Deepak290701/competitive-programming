
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
	    for(int i=0;i<n;i++)
	        cin>>a[i];
	    for(int i=0;i<n;i++){
	        int b=a[i]-1;
	        int count=1;

	        while(b!=i){
	            b=a[b]-1;
	            count++;
	        }
	        cout<<count<<" ";

	    }

	    cout<<"\n";
	}
	return 0;
}

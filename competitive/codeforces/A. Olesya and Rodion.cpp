
//id:- deepak290701


#include <bits/stdc++.h>
using namespace std;
#define int long long
#define fastio ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0)

int32_t main() {
	// your code goes here
	fastio;
	int n,t;
	cin>>n>>t;

	if(t==10 && n==1)
		cout<<-1;
	else{
		if(t==10){
			n--;
			while(n--){
				cout<<7;
			}
			cout<<0;
			return 0;
		}
		while(n-- ){
			cout<<t;
		}
	}
	return 0;
}

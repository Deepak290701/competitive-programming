
//id:- deepak290701

#include <bits/stdc++.h>
using namespace std;
#define int long long
#define fastio ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0)

int32_t main() {
	// your code goes here
	fastio;
	int i,i1;
	cin>>i;
	i1=i;
	string s2,s1,s3;
	cin>>s1;
	s2=s1;
	int count=1;
	i--;
	while(i--){
		cin>>s1;
		if(s1==s2){
			count++;
		}
		else{
			s3=s1;
		}

	}
	if(count>i1/2){
		cout<<s2<<"\n";
	}
	else{
		cout<<s3<<"\n";
	}
	return 0;
}

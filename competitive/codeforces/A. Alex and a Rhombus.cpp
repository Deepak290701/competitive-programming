
//id:- deepak290701

#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    if(n==1){
        cout<<1<<"\n";
        return 0;
    }
    int ans=1;
    for(int i=1;i<n;i++){
        ans+=4*i;
    }
    cout<<ans<<"\n";
    return 0;
}

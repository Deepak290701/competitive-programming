
//id:-deepak290701

#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int n1=n;
    int count=0;
    while(n1>0){
        n1/=10;
        count++;
    }
    int ans=(1<<count)-2;
    for(int i=0;n>0;i++){
        int temp=n%10;
        if(temp==7){
            ans+=(1<<i);
        }
        n/=10;
    }
    cout<<ans+1;
    return 0;
}

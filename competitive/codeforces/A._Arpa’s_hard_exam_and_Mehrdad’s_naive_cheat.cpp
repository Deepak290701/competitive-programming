
// id:-deepak290701

#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    if(n==0){
        cout<<1<<'\n';
        return 0;
    }
    if(n%4==1){
        cout<<8<<"\n";
    }
    else if(n%4==2){
        cout<<4<<"\n";
    }
    else if(n%4==3){
        cout<<2<<"\n";
    }
    else{
        cout<<6<<"\n";
    }
    return 0;
}

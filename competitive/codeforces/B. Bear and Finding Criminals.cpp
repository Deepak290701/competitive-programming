
// id:-deepak290701

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n,t;
    cin>>n>>t;
    int a[n];
    for(int i=0;i<n;i++)
        cin>>a[i];
    t--;
    int r=t,l=t;
    int count=0;
    int temp=min(t,n-t-1);
    //cout<<temp<<" ";
        for(int i=temp;i>=0;i--){
            if(a[r]==1 && a[l]==1){
                count+=2;
                if(r==l)
                    count--;
            }
            r++;
            l--;
        }
    //cout<<l<<" "<<r<<" ";
    if(l>=0){
        for(int i=l;i>=0;i--){
            if(a[i]!=0){
                count++;
            }
        }
    }
    else if(r<n && r>t){
        for(int i=r;i<n;i++){
            if(a[i]!=0){
                count++;
            }
        }
    }
    cout<<count<<"\n";
    return 0;
}

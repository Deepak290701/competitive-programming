
//id:- deepak290701


#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int flag=1;
    char a[n][n];
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
           cin>>a[i][j];
        }
    }
    if(a[0][0]==a[0][1]){
        cout<<"NO\n";
        return 0;
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
           if(i==j || i+j==n-1){
               if(a[i][j]!=a[0][0])
                flag=0;
                continue;
           }
           if(a[i][j]!=a[0][0] && a[i][j]!=a[0][1])
            flag=0;
           else{
                if(a[i][j]!=a[0][1])
                    flag=0;
            }
        }
    }
    if(flag==0){
        cout<<"NO\n";
    }
    else
        cout<<"YES\n";

    return 0;
}

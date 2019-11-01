
// id:-deepak290701

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
        cin>>a[i];
    int ans=0;
    for(int i=0;i<n;i++){
        int count=1;
        for(int j=i;j>0;j--){
            if(a[j-1]<=a[j])
                count++;
            else
                break;
        }
        for(int j=i+1;j<n;j++){
            if(a[j-1]>=a[j])
                count++;
            else break;
        }
        ans=max(ans,count);
    }
    cout<<ans<<"\n";
    return 0;
}

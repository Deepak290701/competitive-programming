#include <bits/stdc++.h>
using namespace std;

float root(int n,int p){
    float ans=-1;
    int s=0,e=n;
    while(s<e){      //loop to find the integral part
        int mid=(s+e)/2;
        if(mid*mid==n){
            ans=mid;
            break;
        }
        else if(mid*mid>n){
            e=mid-1;
        }
        else{
            ans=mid;
            s=mid+1;
        }
    }
    float f=0.1;
    for(int i=1;i<=p;i++){  //loop to calculate decimal part till p precisions
        while(ans*ans<=n){
            ans+=f;
        }
        ans=ans-f;
        f=f/10;
    }
    return ans;

}

int main()
{
    int n;
    int p;   //p is precision value
    cin>>n>>p;
    cout<<root(n,p)<<endl;
    return 0;
}

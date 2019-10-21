
/*
made by:- Deepak sharma
user id:-deepak290701
*/

//question link:-  https://www.codechef.com/OCT19B/problems/S10E/

#include <iostream>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int a[n];
        int count=0;
        for(int i=0;i<n;i++){
            cin>>a[i];
            int j;
            for( j=i-1;j>=i-5;j--){
                if(j<0)
                    break;
                if(a[i]<a[j]){
                    continue;
                }
                else
                    break;
            }
            if(j<0 || j<i-5)
                count++;
        }
        cout<<count<<"\n";
    }
    return 0;
}

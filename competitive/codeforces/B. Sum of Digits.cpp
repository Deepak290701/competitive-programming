
// id:-deepak290701

#include <bits/stdc++.h>
using namespace std;

int main()
{
   string s;
   cin>>s;
   int sum=0;
   if(s.size()==1)
   {
    cout<<0;
    return 0;
   }
   for(int i=0;i<s.size();i++){
        sum=sum+(s[i]-'0');
   }
   int count=1;
   while(sum>=10){
        count++;
        int temp=sum;
        int s=0;
        while(temp>0){
            s=s+(temp%10);
            temp/=10;
        }
        sum=s;
   }
   cout<<count<<"\n";
   return 0;
}

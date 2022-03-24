
#include <bits/stdc++.h>

using namespace std;


int main()
{
   long long int n;
   cin>>n;
   int c=0;
   while(n!=0){
       int i=n%10;
       if(i==4||i==7){
           c++;
       }
       n=n/10;
   }
   if(c==4||c==7){
       cout<<"YES"<<endl;
   }
   else{
       cout<<"NO"<<endl;
   }
    return 0;
}

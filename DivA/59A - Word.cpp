#include <bits/stdc++.h>

using namespace std;


int main()
{
   string s;
   cin>>s;
   int Lc=0,Uc=0,n=s.length();
   for(auto i=0;i<n;i++){
       if(isupper(s[i])){
           Uc++;
       }
       else if(islower(s[i])){
           Lc++;
       }
   }
   if(Lc<Uc){
       transform(s.begin(), s.end(), s.begin(), ::toupper);
   }
   else{
       transform(s.begin(), s.end(), s.begin(), ::tolower);
   }
   
   cout<<s<<endl;

    return 0;
}

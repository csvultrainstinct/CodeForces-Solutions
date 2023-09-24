#include <iostream>
#include <string>
 
using namespace std;
 
int main()
{
   int t;
   cin>>t;
   while(t--)
   {
       string s;
       cin>>s;
       int c=0;
       if(s[0]!='a')
       {
           c++;
       }
       if(s[1]!='b')
       {
           c++;
       }
       if(s[2]!='c')
       {
           c++;
       }
       if(c<=2)
       {
           cout<<"YES"<<endl;
       }
       else
       {
         cout<<"NO"<<endl;   
       }
   }
 
    return 0;
}

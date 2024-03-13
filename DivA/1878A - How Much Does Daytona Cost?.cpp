#include <iostream>

#include <vector>

using namespace std;

int main()
{
    int t;
    cin>>t;
    
    while(t--)
    {
       int n,k,f=0;
       cin>>n>>k;
       
       vector<int>a;
       for(auto i=0;i<n;i++)
       {
           int ins;
           cin>>ins;
           a.push_back(ins);
       }
       
       for(auto i=0;i<n;i++)
       {
           if(a[i]==k)
           {
               f=1;
           }
       }
       
       if(f)
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

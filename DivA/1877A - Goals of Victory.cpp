#include <iostream>



using namespace std;

int main()
{
    int t;
    cin>>t;
    
    while(t--)
    {
       int n,ps=0,ns=0,ans=0;
       cin>>n;
       
       for(auto i=0;i<n-1;i++)
       {
           int ins;
           cin>>ins;
           if(ins>=0)
           {
               ps+=ins;
           }
           else
           {
               ns+=ins;
           }
       }
       ans=ps+ns;
       if(ps>ns)
       {
           cout<<(-1)*ans<<endl;
       }
       else
       {
           cout<<ans<<endl;
       }
       
    }
        
    

    return 0;
}

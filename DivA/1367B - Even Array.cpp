#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int t;
    cin>>t;
    
    while(t--)
    {
      int n,o=0,e=0;
      cin>>n;
      
      vector<int>a;
      
      for(auto i=0;i<n;i++)
      {
          int ins;
          cin>>ins;
          a.push_back(ins);
      }
      
      if(n==1)
      {
          cout<<-1<<endl;
          continue;
      }
      
      for(auto i=0;i<n;i++)
      {
         if(i%2==0 && a[i]%2!=0)
         {
             o++;
         }
         else if(i%2!=0 && a[i]%2==0)
         {
             e++;
         }
      }
      
      if(o!=e)
      {
          cout<<-1<<endl;
      }
      else{
          cout<<e<<endl;
      }
    }

    return 0;
}

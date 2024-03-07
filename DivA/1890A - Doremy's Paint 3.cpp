#include <iostream>

#include <vector>

#include <unordered_map>

using namespace std;

int main()
{
    int t;
    cin>>t;
    
    while(t--)
    {
        int n,c=0,maxi=0;
        cin>>n;
        
        vector<int>a;
        
        unordered_map<int,int>m;
        
        for(auto i=0;i<n;i++)
        {
            int ins;
            cin>>ins;
            a.push_back(ins);
            m[ins]++;
            maxi=max(maxi,m[ins]);
        }
        
        if(n==2)
        {
            cout<<"Yes"<<endl;
        }
        else if(n>2)
        {
           if(n%2!=0)
           {
            if((maxi==(n/2)+1 && m.size()==2) || (maxi==n))
            {
                cout<<"Yes"<<endl;
            }
            else
            {
                cout<<"No"<<endl;
            }
           }
           else
           {
             if((maxi==(n/2) && m.size()==2) || (maxi==n))
            {
                cout<<"Yes"<<endl;
            }
            else
            {
                cout<<"No"<<endl;
            }  
           }
        }
    }
        
    

    return 0;
}

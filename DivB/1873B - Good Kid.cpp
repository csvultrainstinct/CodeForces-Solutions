#include <iostream>
#include <climits>
#include <vector>

using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        vector<int>a;
        int mini=INT_MAX,c=0;
        long long int ans=1;
        for(auto i=0;i<n;i++)
        {
            int ins;
            cin>>ins;
            a.push_back(ins);
            if(ins<mini)
            {
                mini=ins;
            }
        }
        for(auto i=0;i<n;i++)
        {
            if(a[i]==mini && c==0)
            {
                a[i]=a[i]+1;
                c++;
            }
            ans=ans*a[i];
        }
        
        cout<<ans<<endl;
    }
    
    return 0;
}

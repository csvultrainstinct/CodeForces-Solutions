#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int n,k;
    cin>>n>>k;
    
    vector<int>a;
    
    for(auto i=0;i<n;i++)
    {
        int ins;
        cin>>ins;
        if((5-ins)>=k)
        {
           a.push_back(ins);
        }
    }
    
    cout<<a.size()/3<<endl;

    return 0;
}

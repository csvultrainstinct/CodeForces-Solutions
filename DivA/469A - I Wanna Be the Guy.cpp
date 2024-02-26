#include <iostream>
#include <unordered_map>

using namespace std;

int main()
{
    int n,p,q;
    cin>>n;
    unordered_map<int,int>m;
    cin>>p;
    for(auto i=0;i<p;i++)
    {
        int ins;
        cin>>ins;
        m[ins]=i;
    }
    cin>>q;
    for(auto i=0;i<q;i++)
    {
        int ins1;
        cin>>ins1;
        if(m.find(ins1)==m.end())
        {
            m[ins1]=i;
        }
    }
    
    if(m.size()==n)
    {
        cout<<"I become the guy."<<endl;
    }
    else
    {
        cout<<"Oh, my keyboard!"<<endl;
    }
    return 0;
}

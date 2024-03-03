#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int n,s=0,d=0,j=1;
    vector<int>a;
    cin>>n;
    
    for(auto i=0;i<n;i++)
    {
        int ins;
        cin>>ins;
        a.push_back(ins);
    }
    
    while(!a.empty())
    {
        if(j%2==0)
        {
            if(a.front()>a.back())
            {
                d+=a[0];
                a.erase(a.begin());
            }
            else
            {
                d+=a[a.size()-1];
                a.pop_back();
            }
        }
        else
        {
            if(a.front()>a.back())
            {
                s+=a[0];
                a.erase(a.begin());
            }
            else
            {
                s+=a[a.size()-1];
                a.pop_back();
            }
        }
        j++;
    }
    
    cout<<s<<" "<<d<<endl;

    return 0;
}

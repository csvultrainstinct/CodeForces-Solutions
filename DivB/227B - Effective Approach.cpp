
#include <bits/stdc++.h>

using namespace std;

int main()
{
    unordered_map<long long int,long long int>m;
    long long int n,m1,v=0,p=0;
    cin>>n;
    vector<long long int>a;
    for(auto i=0;i<n;i++)
    {
        long long int ins;
        cin>>ins;
        a.push_back(ins);
        m[ins]=i;
    }
    cin>>m1;
    for(auto i=0;i<m1;i++)
    {
        long long int ins;
        cin>>ins;
        v+=m[ins]-0+1;
        p+=(n-1)-m[ins]+1;
    }
    
    cout<<v<<" "<<p<<endl;

    return 0;
}

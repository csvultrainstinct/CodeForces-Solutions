#include <bits/stdc++.h>

using namespace std;

int main()
{
    unordered_map<int,int>m;
    for(auto i=0;i<4;i++){
        int ins;
        cin>>ins;
        m[ins]++;
    }
    cout<<4-m.size()<<endl;
    return 0;
}

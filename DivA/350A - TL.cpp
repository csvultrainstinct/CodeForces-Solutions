#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n,m;
    cin>>n>>m;
    vector<int>a;
    vector<int>b;
    int max1=INT_MIN,min1=INT_MAX,min2=INT_MAX;
    for(auto i=0;i<n;i++){
        int ins;
        cin>>ins;
        max1=max(max1,ins);
        min1=min(min1,ins);
        a.push_back(ins);
    }
    for(auto i=0;i<m;i++){
        int ins;
        cin>>ins;
        min2=min(min2,ins);
        b.push_back(ins);
    }
    //cout<<max1<<" "<<min1<<" "<<min2<<endl;
    if(max1>=(2*min1)&& max1<min2){
        cout<<max1<<endl;
    }
    else if((2*min1)>max1&& (2*min1)<min2){
        cout<<2*min1<<endl;
    }
    else{
        cout<<-1<<endl;
    }
    
    return 0;
}

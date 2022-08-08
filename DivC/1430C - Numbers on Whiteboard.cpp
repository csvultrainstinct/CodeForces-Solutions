
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int>a;
        vector<pair<int,int>>b;
        for(auto i=1;i<=n;i++){
            a.push_back(i);
        }
        while(a.size()>1){
            int t1=a[a.size()-1];
            int t2=a[a.size()-2];
            b.push_back({t2,t1});
            a.pop_back();
            a.pop_back();
            int temp;
            if((t1+t2)%2==0){
                temp=(t1+t2)/2;
            }
            else{
                temp=((t1+t2)/2)+1;
            }
            a.push_back(temp);
        }
        cout<<a[0]<<endl;
        for(auto i=0;i<b.size();i++){
            cout<<b[i].first<<" "<<b[i].second<<endl;
        }
    }
    
    return 0;
}

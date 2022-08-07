#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin>>n;
    int ans=0;
    for(auto i=0;i<n;i++){
        int c=0;
        int u,v,w;
        cin>>u>>v>>w;
        if(u==1){
            c++;
        }
        if(v==1){
            c++;
        }
        if(w==1){
            c++;
        }
        
        if(c>=2){
            ans++;
        }
    }
    
    cout<<ans<<endl;

    return 0;
}

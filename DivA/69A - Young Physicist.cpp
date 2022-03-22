#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin>>n;
    int Xs=0,Ys=0,Zs=0;
    for(auto i=0;i<n;i++){
        int x,y,z;
        cin>>x>>y>>z;
        Xs+=x;
        Ys+=y;
        Zs+=z;
    }
    if(Xs==0 && Ys==0 && Zs==0){
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }
    return 0;
}

#include <bits/stdc++.h>

using namespace std;

int main()
{
    string a,b;
    cin>>a;
    cin>>b;
    int n=a.length();
    for(int i=0;i<n;i++){
        if(a[i]==b[i]){
            cout<<0;
        }
        else{
            cout<<1;
        }
    }

    return 0;
}

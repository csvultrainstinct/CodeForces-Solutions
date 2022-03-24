#include <bits/stdc++.h>

using namespace std;


int main()
{
    int n;
    cin>>n;
    string s;
    cin>>s;
    int MaxConsec=0,AllConsec=0;
    for(auto i=0;i<n-1;i++){
        if(s[i]==s[i+1]){
            MaxConsec++;
        }
        else{
            AllConsec+=MaxConsec;
            MaxConsec=0;
        }
    }
    AllConsec+=MaxConsec;
    cout<<AllConsec<<endl;
    return 0;
}

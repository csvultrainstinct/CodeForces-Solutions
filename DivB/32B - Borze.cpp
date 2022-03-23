#include <bits/stdc++.h>

using namespace std;

int main()
{
    string s;
    cin>>s;
    int n=s.length();
    string t;
    int i=0;
    for(i=0;i<n-1;i++){
        if(s[i]=='.'){
            t+='0';
        }
        if(s[i]=='-' && s[i+1]=='.'){
            t+='1';
            i++;
        }
        else if(s[i]=='-' && s[i+1]=='-'){
            t+='2';
            i++;
        }
    }
    if(s[n-1]=='.' && i<=n-1){
        t+='0';
    }
    cout<<t<<endl;
    //cout<<stoll(t, nullptr, 10)<<endl;
    return 0;
}

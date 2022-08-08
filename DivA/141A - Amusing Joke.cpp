#include <bits/stdc++.h>

using namespace std;

int main()
{
    string s1,s2,s3;
    cin>>s1>>s2>>s3;
    unordered_map<char,int>m;
    
    for(auto i=0;i<s1.length();i++){
        m[s1[i]]++;
    }
    for(auto i=0;i<s2.length();i++){
        m[s2[i]]++;
    }
    for(auto i=0;i<s3.length();i++){
        m[s3[i]]--;
        if(m[s3[i]]==0){
            m.erase(s3[i]);
        }
    }
    //cout<<m.size()<<endl;
    if(m.empty()){
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }
    
    return 0;
}

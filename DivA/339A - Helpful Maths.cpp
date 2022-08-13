#include <bits/stdc++.h>

using namespace std;

int main()
{
    string s;
    cin>>s;
    int ones=0,twos=0,threes=0;
    for(auto i=0;i<s.length();i++){
        if(s[i]=='1'){
            ones++;
        }
        else if(s[i]=='2'){
            twos++;
        }
        else if(s[i]=='3'){
            threes++;
        }
    }
    string t="";
    while(ones>0 || twos>0 || threes>0){
       if(ones>0){
           t+='1';
           t+='+';
           ones--;
       }
       else if(twos>0){
           t+='2';
           t+='+';
           twos--;
       }
       else if(threes>0){
           t+='3';
           t+='+';
           threes--;
       }
    }
    t.resize(t.size()-1);
    cout<<t<<endl;
    return 0;
}

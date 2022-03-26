#include <bits/stdc++.h>

using namespace std;

bool isPrime(int n)
{

    if (n <= 1)
        return false;
  
    for (int i = 2; i < n; i++)
        if (n % i == 0)
            return false;
  
    return true;
}

int nextPrime(int n){
    while(n++){
        if(isPrime(n)){
            return n;
        }
    }
    
  return -1;    
}

int main()
{
    int n,m;
    cin>>n>>m;
    
    if(nextPrime(n)==m){
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }

    return 0;
}

// Brute force or naive solution
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin>>n;
    n++;
    while(n){
       int i=n;
       unordered_set<int>us;
       while(i){
           us.insert(i%10);
           i=i/10;
       }
        
        if(us.size()==4){
            break;    
        }    
        n++;    
    }
    cout<<n<<endl;
    return 0;
}

// correct and optimal solution

#include <bits/stdc++.h>

using namespace std;

int main()
{ 
    int n;
    cin>>n;
    n++;
    while(n){
        int ones=n%10;
        int tens=(n/10) % 10;
        int thousands=(n/100) % 10;
        int tenThousands=(n/1000) % 10;
        if(ones!=tens && ones!=thousands && ones!=tenThousands && tens!=thousands && tens!=tenThousands && thousands!=tenThousands){
            break;
        }
        n++;
    }
    cout<<n<<endl;
    return 0;
}

#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int n,i=0,count=0;
    cin>>n;
    vector<int>a={100,20,10,5,1};
    
    while(i<5 && n)
    {
        if(n>=a[i])
        {
            n=n-a[i];
            count++;
        }
        else{
            i++;
        }
    }
    
    cout<<count<<endl;
    
    return 0;
}

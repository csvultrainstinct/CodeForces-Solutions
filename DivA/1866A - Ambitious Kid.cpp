#include <iostream>

using namespace std;

int main()
{
    int n,mini=100001;
    cin>>n;
    
    
    for(auto i=0;i<n;i++)
    {
        int ins;
        cin>>ins;
        mini=min(mini,abs(ins-0));
    }
    
    cout<<mini<<endl;

    return 0;
}

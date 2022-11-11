#include <iostream>

using namespace std;

int main()
{
    int n;
    cin>>n;
    if(n%2!=0)
    {
        cout<<-1<<endl;
    }
    else{
        for(auto i=1;i<=n;i++)
        {
            cout<<i+1<<" ";
            cout<<i+1-1<<" ";
            i++;
        }
    }

    return 0;
}

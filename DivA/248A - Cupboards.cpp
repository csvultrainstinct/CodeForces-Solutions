#include <iostream>

using namespace std;

int main()
{
    int n,lc=0,lo=0,rc=0,ro=0;
    cin>>n;
    while(n--)
    {
        int i,j;
        cin>>i>>j;
        if(i==0)
        {
            lc++;
        }
        if(i==1)
        {
            lo++;
        }
        if(j==0)
        {
            rc++;
        }
        if(j==1)
        {
            ro++;
        }
    }
    
    cout<<min(lc,lo)+min(rc,ro)<<endl;
    return 0;
}

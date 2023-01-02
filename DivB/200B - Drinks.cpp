#include <iomanip>
#include <iostream>

using namespace std;

int main()
{
    int n;
    double c=0.0,d=0.0;
    cin>>n;
    for(auto i=0;i<n;i++)
    {
        int ins;
        cin>>ins;
        c+=(ins/(double)100);
    }
   
    d=(c/n)*100;
    cout<<fixed<<setprecision(12)<<d<<endl;
  
    return 0;
}

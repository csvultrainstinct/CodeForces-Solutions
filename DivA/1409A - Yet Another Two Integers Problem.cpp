#include <iostream>

using namespace std;

int main()
{
    int t;
    cin>>t;
    
    while(t--)
    {
        int a,b,c=0,num=10,temp;
        cin>>a>>b;
        
        if(abs(b-a)==0)
        {
            cout<<0<<endl;
            continue;
        }
        if(abs(b-a)>0 && abs(b-a)<=10)
        {
            cout<<1<<endl;
            continue;
        }
        temp=abs(b-a);
        
        while(temp>0)
        {
            c+=temp/num;
            temp=temp%num;
            num--;
        }
        
        cout<<c<<endl;
        
    }

    return 0;
}

#include <iostream>

#include <vector>

using namespace std;

int main()
{
    int t;
    cin>>t;
    
    while(t--)
    {
       vector<vector<char>>a;
       
       int tot=0;
       
       for(auto i=0;i<10;i++)
       {
           vector<char>b;
           for(auto j=0;j<10;j++)
           {
               char ins;
               cin>>ins;
               b.push_back(ins);
           }
           a.push_back(b);
       }
       
       for(auto i=0;i<10;i++)
       {
           for(auto j=0;j<10;j++)
           {
               if(a[i][j]=='X')
               {
                   if((i==0 || i==9) || (j==0 || j==9)) 
                   {
                     tot+=1;
                   }
                   else if((i==1 || i==8) || (j==1 || j==8)) 
                   {
                     tot+=2;
                   }
                   else if((i==2 || i==7) || (j==2 || j==7)) 
                   {
                     tot+=3;
                   }
                   else if((i==3 || i==6) || (j==3 || j==6)) 
                   {
                     tot+=4;
                   }
                   else
                   {
                     tot+=5;
                   }
               }
           }
       }
       
       cout<<tot<<endl;
       
    }
        
    

    return 0;
}

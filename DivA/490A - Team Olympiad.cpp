#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int n;
    cin>>n;
    
    int s1[50001],s2[50001],s3[50001],j=0,k=0,l=0;
    
    
    vector<int>a;
    
    for(auto i=0;i<n;i++)
    {
        int ins;
        cin>>ins;
        a.push_back(ins);
    }
    
   for(auto i=0;i<n;i++)
   {
       if(a[i]==1)
       {
           s1[j]=i+1;
           j++;
       }
       
       else if(a[i]==2)
       {
           s2[k]=i+1;
           k++;
       }
       
       else if(a[i]==3)
       {
           s3[l]=i+1;
           l++;
       }
       
   }

   int i=0;
 
   cout<<min(j,min(k,l))<<endl;
   
   
   while(i<j && i<k && i<l)
   {
       cout<<s1[i]<<" "<<s2[i]<<" "<<s3[i]<<endl;
       i++;
   }

    return 0;
}

#include <bits/stdc++.h>

using namespace std;

int main()
{
    vector<vector<int>>matrix;
    int row=0,column=0;
    for(auto i=1;i<=5;i++){
        vector<int>SubMatrix;
        for(auto j=1;j<=5;j++){
            int ins;
            cin>>ins;
            if(ins==1){
                row=i;
                column=j;
            }
            SubMatrix.push_back(ins);
        }
        matrix.push_back(SubMatrix);
    }
    
    cout<<abs(row-3)+abs(column-3)<<endl;
    return 0;
}

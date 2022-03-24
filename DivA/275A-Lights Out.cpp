#include <bits/stdc++.h>

using namespace std;

bool isValid(int i, int j){
    if(i>=0 && j>=0 && i<3 && j<3){
        return true;
    }
    
    return false;
}

int main()
{
    int inputMatrix[3][3];
    for(auto i=0;i<3;i++){
        for(auto j=0;j<3;j++){
            cin>>inputMatrix[i][j];
        }
    }
    int initialMatrix[3][3]={{1,1,1},{1,1,1},{1,1,1}};
    for(auto i=0;i<3;i++){
        for(auto j=0;j<3;j++){
            
            if(inputMatrix[i][j]%2==1){
                initialMatrix[i][j]=1-initialMatrix[i][j];
                if(isValid(i-1,j)){
                  initialMatrix[i-1][j]=1-initialMatrix[i-1][j];  
                }
                if(isValid(i,j-1)){
                  initialMatrix[i][j-1]=1-initialMatrix[i][j-1];  
                }
                if(isValid(i+1,j)){
                  initialMatrix[i+1][j]=1-initialMatrix[i+1][j];  
                }
                if(isValid(i,j+1)){
                  initialMatrix[i][j+1]=1-initialMatrix[i][j+1];  
                }
            }
            
        }  
    }
    
    
    for(auto i=0;i<3;i++){
        for(auto j=0;j<3;j++){
            cout<<initialMatrix[i][j];
        }
        cout<<endl;
    }

    return 0;
}


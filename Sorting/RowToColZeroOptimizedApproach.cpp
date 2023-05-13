//You are given a 2D integer matrix A, make all the elements in a row or column zero if the A[i][j] = 0. Specifically, make entire ith row and jth column zero.
#include<bits/stdc++.h>
using namespace std;

int main(){
    
    vector<vector<int>>A{
        {1,2,3,4},
        {5,6,7,0},
        {9,2,0,4}
    };

    
    for(int i=0;i<A.size();i++){
        for(int j=0;j<A[0].size();j++){
           if(A[i][j]==0){
            A[i][0]=0;
            A[0][j]=0;
           }
        }
    }

     for(int i=1;i<A.size();i++){
        for(int j=1;j<A[0].size();j++){
           if(A[0][j]==0 or A[i][0]==0){
            A[i][j]=0;
           }
        }
    }



    for(int i=0;i<A.size();i++){
        for(int j=0;j<A[0].size();j++){
            cout<<A[i][j]<<" ";
        }
        cout<<endl;
    }



    return 0;
}

//TC: O(N^2)
//SC: O(N)
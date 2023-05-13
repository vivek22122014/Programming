//You are given a 2D integer matrix A, make all the elements in a row or column zero if the A[i][j] = 0. Specifically, make entire ith row and jth column zero.
#include<bits/stdc++.h>
using namespace std;

int main(){
    
    vector<vector<int>>A{
        {1,2,3,4},
        {5,6,7,0},
        {9,2,0,4}
    };

    vector<int> row;
    vector<int> col;

    for(int i=0;i<A.size();i++){
        for(int j=0;j<A[0].size();j++){
            if(A[i][j]==0){
                row.push_back(i);
                col.push_back(j);
            }
        }
       
    }

    for(int r=0;r<row.size();r++){
        for(int j=0;j<A[0].size();j++){
            A[row[r]][j]=0;
        }
    }

     for(int c=0;c<col.size();c++){
        for(int i=0;i<A.size();i++){
            A[i][col[c]]=0;
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
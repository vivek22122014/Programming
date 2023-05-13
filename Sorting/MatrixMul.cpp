#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<vector<int>> A{
        {1,-1},
        {2,0},
        {2,4},
    };
    vector<vector<int>> B{
        {1,0,1,-1},
        {4,1,2,3},
    };
   
    vector<vector<int>> C(A.size(),vector<int>(B[0].size(),0));

    for(int i=0;i<A.size();i++){
        for(int j=0;j<B[0].size();j++){
            for(int k=0;k<A[0].size();k++){
                C[i][j]+=A[i][k]*B[k][j];
            }
        }
    }


    for(int i=0;i<C.size();i++){
        for(int j=0;j<C[0].size();j++){
            cout<<C[i][j]<<" ";
        }
        cout<<endl;
    }

    return 0;
}
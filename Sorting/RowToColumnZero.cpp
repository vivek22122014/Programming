//You are given a 2D integer matrix A, make all the elements in a row or column zero if the A[i][j] = 0. Specifically, make entire ith row and jth column zero.
#include<bits/stdc++.h>
using namespace std;

int main(){
    
    vector<vector<int>>A{
        {1,2,3,4},
        {5,6,7,0},
        {9,2,0,4}
    };

    vector<vector<int>>v;
    v=A;
    int a,b,j=0;
    for(int i=0;i<v.size();i++){
        a=-1;
        b=-1;
        if(j>=v[0].size()) j=0;
        for(;j<v[0].size();j++){
            if(A[i][j]==0){
                a=i;
                b=j;
                break;
            }
        }
        if(a!=-1 and b!=-1){
        for(int k=0;k<v[0].size();k++){
                    v[a][k]=0;
                }
        for(int k=0;k<v.size();k++){
                    v[k][b]=0;
                }
                if(j<v[0].size()-1)
                    i--;
                j++;
        }
                
    }


    for(int i=0;i<v.size();i++){
        for(int j=0;j<v[0].size();j++){
            cout<<v[i][j]<<" ";
        }
        cout<<endl;
    }
     

    cout<<endl;



    return 0;
}
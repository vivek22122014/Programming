/*
Google
Given an
array find total numberof
triplets i j k such that
A[i]<A[j]<A[k]
*/


#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<int> A={1,6,4,2,6,9};
    int n=A.size();
    int count=0;
    for(int j=1;j<=n-2;j++){
        int count_left=0;
        for(int i=j-1;i>=0;i--){
           if(A[i]<A[j]){
            count_left++;
           }
        }
        int count_right=0;
        for(int k=j+1;k<n;k++){
            if(A[j]<A[k]){
                count_right++;
            }
        }

        count+=(count_left*count_right);
    }

    cout<<"Total Triplets: "<<count<<endl;

    return 0;
}